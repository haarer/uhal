/*
 * dallas_temp_sens.h
 *
 *  Created on: 04.02.2018
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA 
 *
 *      Layer to deal with dallas temperature sensors
 *      parametrized by a onewire implementation
 *
 *      derived from DallasTemperature Arduino Library
 *
 * ToDo: convert  defines to consts, and move local ones into class name space
 * ToDo: parasite power support
 */

#ifndef HAL_DALLAS_TEMP_SENS_H_
#define HAL_DALLAS_TEMP_SENS_H_

#include "HAL/HAL.h"
#include <HAL/HAL_OneWire.h>

// this would be provided before including, if logging is needed
#ifndef LogDALLASTEMP
#define LogDALLASTEMP(...)
#define LogSubSys(subsys,...)

#endif

// Model IDs
#define DS18S20MODEL 0x10  // also DS1820
#define DS18B20MODEL 0x28
#define DS1822MODEL  0x22
#define DS1825MODEL  0x3B
#define DS28EA00MODEL 0x42

// Error Codes
#define DEVICE_DISCONNECTED_C -127
#define DEVICE_DISCONNECTED_F -196.6
#define DEVICE_DISCONNECTED_RAW -7040

// OneWire commands
#define STARTCONVO      0x44  // Tells device to take a temperature reading and put it on the scratchpad
#define COPYSCRATCH     0x48  // Copy EEPROM
#define READSCRATCH     0xBE  // Read EEPROM
#define WRITESCRATCH    0x4E  // Write to EEPROM
#define RECALLSCRATCH   0xB8  // Reload from last known
#define READPOWERSUPPLY 0xB4  // Determine if device needs parasite power
#define ALARMSEARCH     0xEC  // Query bus for devices with an alarm condition

// Scratchpad locations
#define TEMP_LSB        0
#define TEMP_MSB        1
#define HIGH_ALARM_TEMP 2
#define LOW_ALARM_TEMP  3
#define CONFIGURATION   4
#define INTERNAL_BYTE   5
#define COUNT_REMAIN    6
#define COUNT_PER_C     7
#define SCRATCHPAD_CRC  8

// Device resolution
#define TEMP_9_BIT  0x1F //  9 bit
#define TEMP_10_BIT 0x3F // 10 bit
#define TEMP_11_BIT 0x5F // 11 bit
#define TEMP_12_BIT 0x7F // 12 bit


template <class T>
class DallasTemperature
{
	const T m_p_wire;

	typedef uint8_t ScratchPad[9];

	// parasite power on or off
	bool parasite;

	// used to determine the delay amount needed to allow for the
	// temperature conversion to take place
	//uint8_t bitResolution;

	// used to requestTemperature to dynamically check if a conversion is complete
	bool checkForConversion;


public:

	// used to requestTemperature with or without delay
	bool waitForConversion;

	DallasTemperature(const T _p_wire):m_p_wire(_p_wire)
	{
		parasite = false;
		//bitResolution = 9;
		waitForConversion = true;
		checkForConversion = true;

	}

	// according to app note 27 the polynom is x^8 + x^5 + x^3 +^
	// Compute a Dallas Semiconductor 8 bit CRC, these are used in the
	// ROM and scratchpad registers.
	static uint8_t crc8(const uint8_t *addr, uint8_t len) {
		LogSubSys(DALLASTEMP,"%s\n", __PRETTY_FUNCTION__ );
		uint8_t crc = 0;

		while (len--) {
			uint8_t inbyte = *addr++;
			for (uint8_t i = 8; i; i--) {
				uint8_t mix = (crc ^ inbyte) & 0x01;
				crc >>= 1;
				if (mix)
					crc ^= 0x8C;
				inbyte >>= 1;
			}
		}
		return crc;
	}

	// returns number of milliseconds to wait till conversion is complete (based on IC datasheet)
	int16_t millisToWaitForConversion(uint8_t bitResolution) {

		switch (bitResolution) {
		case 9:
			return 94;
		case 10:
			return 188;
		case 11:
			return 375;
		default:
			return 750;
		}

	}

	bool isConversionComplete() {
		uint8_t b = m_p_wire->read_bit();
		return (b == 1);
	}
	// Continue to check if the IC has responded with a temperature
	void blockTillConversionComplete(uint8_t bitResolution) {

		int16_t del_ms = millisToWaitForConversion(bitResolution);
		if (checkForConversion && !parasite) {
#ifdef millis
			unsigned long now = millis();
			while (!isConversionComplete() && (millis() - del_ms < now))
				;

#else
		// if the millis call is not available fall back to a busy wait and check every ms
			for ( int16_t del_cnt=0 ; ! isConversionComplete() && del_cnt < del_ms ; del_cnt++)
			{
				delay(1);
			}


#endif

		} else {
			//delay(del_ms);
			for ( int16_t del_cnt=0 ;  del_cnt < del_ms ; del_cnt++)
			{
						delay(1);
			}
		}

	}


	bool readScratchPad(const OneWireAddress deviceAddress,
			uint8_t* scratchPad) {

		// send the reset command and fail fast
		int b = m_p_wire->reset();
		if (b == 0)
			return false;

		m_p_wire->select(deviceAddress);
		m_p_wire->write(READSCRATCH);

		// Read all registers in a simple loop
		// byte 0: temperature LSB
		// byte 1: temperature MSB
		// byte 2: high alarm temp
		// byte 3: low alarm temp
		// byte 4: DS18S20: store for crc
		//         DS18B20 & DS1822: configuration register
		// byte 5: internal use & crc
		// byte 6: DS18S20: COUNT_REMAIN
		//         DS18B20 & DS1822: store for crc
		// byte 7: DS18S20: COUNT_PER_C
		//         DS18B20 & DS1822: store for crc
		// byte 8: SCRATCHPAD_CRC
		for (uint8_t i = 0; i < 9; i++) {
			scratchPad[i] = m_p_wire->read();
		}

		b = m_p_wire->reset();
		return (b == 1);
	}

	// attempt to determine if the device at the given address is connected to the bus
	// also allows for updating the read scratchpad
	bool isConnected(const OneWireAddress deviceAddress,
			uint8_t* scratchPad) {
		bool b = readScratchPad(deviceAddress, scratchPad);
		return b && (crc8(scratchPad, 8) == scratchPad[SCRATCHPAD_CRC]);
	}

	// returns the current resolution of the device, 9-12
	// returns 0 if device not found
	uint8_t getResolution(const OneWireAddress deviceAddress) {

		// DS1820 and DS18S20 have no resolution configuration register
		if (deviceAddress[0] == DS18S20MODEL)
			return 12;

		ScratchPad scratchPad;
		if (isConnected(deviceAddress, scratchPad)) {
			switch (scratchPad[CONFIGURATION]) {
			case TEMP_12_BIT:
				return 12;

			case TEMP_11_BIT:
				return 11;

			case TEMP_10_BIT:
				return 10;

			case TEMP_9_BIT:
				return 9;
			}
		}
		return 0;

	}

	bool requestTemperaturesByAddress(
			const OneWireAddress deviceAddress) {

		uint8_t bitResolution = getResolution(deviceAddress);
		if (bitResolution == 0) {
			return false; //Device disconnected
		}

		LogSubSys(DALLASTEMP,"reset");
		m_p_wire->reset();
		LogSubSys(DALLASTEMP,"select");
		m_p_wire->select(deviceAddress);
		LogSubSys(DALLASTEMP,"startconv");
		m_p_wire->write(STARTCONVO, parasite);

		// ASYNC mode?
		LogSubSys(DALLASTEMP,"wait");

		if (!waitForConversion)
			return true;

		blockTillConversionComplete(bitResolution);
		LogSubSys(DALLASTEMP,"done");

		return true;

	}


	// reads scratchpad and returns fixed-point temperature, scaling factor 2^-7
	int16_t calculateTemperature(const OneWireAddress deviceAddress,
			uint8_t* scratchPad) {

		int16_t fpTemperature = (((int16_t) scratchPad[TEMP_MSB]) << 11)
				| (((int16_t) scratchPad[TEMP_LSB]) << 3);

		/*
		 DS1820 and DS18S20 have a 9-bit temperature register.

		 Resolutions greater than 9-bit can be calculated using the data from
		 the temperature, and COUNT REMAIN and COUNT PER �C registers in the
		 scratchpad.  The resolution of the calculation depends on the model.

		 While the COUNT PER �C register is hard-wired to 16 (10h) in a
		 DS18S20, it changes with temperature in DS1820.

		 After reading the scratchpad, the TEMP_READ value is obtained by
		 truncating the 0.5�C bit (bit 0) from the temperature data. The
		 extended resolution temperature can then be calculated using the
		 following equation:

		 COUNT_PER_C - COUNT_REMAIN
		 TEMPERATURE = TEMP_READ - 0.25 + --------------------------
		 COUNT_PER_C

		 Hagai Shatz simplified this to integer arithmetic for a 12 bits
		 value for a DS18S20, and James Cameron added legacy DS1820 support.

		 See - http://myarduinotoy.blogspot.co.uk/2013/02/12bit-result-from-ds18s20.html
		 */

		if (deviceAddress[0] == DS18S20MODEL) {
			fpTemperature = ((fpTemperature & 0xfff0) << 3) - 16
					+ (((scratchPad[COUNT_PER_C] - scratchPad[COUNT_REMAIN]) << 7)
							/ scratchPad[COUNT_PER_C]);
		}

		return fpTemperature;
	}
	int16_t getTemp(const OneWireAddress deviceAddress) {

		ScratchPad scratchPad;
		if (isConnected(deviceAddress, scratchPad))
			return calculateTemperature(deviceAddress, scratchPad);
		return DEVICE_DISCONNECTED_RAW;

	}

	// temperature in C * 100
	int16_t getTempC(const OneWireAddress deviceAddress) {
		return( ( (unsigned long)getTemp(deviceAddress) * 100L ) / 128);
	}
};



#endif /* DALLAS_TEMP_SENS_H_ */
