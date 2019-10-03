/*
 * OneWire.h
 *
 * Protocol layer for the OneWire Protocol
 * Platform agnostic
 *

 * Created: 31.01.2018
 * HAL Adaption by Alexander Haarer 2018 License CC BY-SA 
 *
 * I removed all platform dependencies, also the dependencies to the arduino Librariey,
 *  and the crc algorithms
 *
 * This is work derived from the Arduino OnWire library
 *
 * Copyright (c) 2007, Jim Studt  (original old version - many contributors since)
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:

 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef HAL_OneWire_h
#define HAL_OneWire_h

#include "HAL/HAL.h"
using namespace UHAL;

#include <inttypes.h>

// this would be provided before including, if logging is needed
#ifndef LogONEWIRE
#define LogONEWIRE(...)
#define LogSubSys(subsys,...)
#endif



// you can exclude onewire_search by defining that to 0
#ifndef ONEWIRE_SEARCH
#define ONEWIRE_SEARCH 1
#endif


// T& operator[](T u); mutable
// const T& operator[](T u) const; immutable

typedef struct OneWireAddress {
	  uint8_t _byte[8];
	  uint8_t& operator[](int i)       { return _byte[i]; }
	  const uint8_t&  operator[](int i) const { return _byte[i]; }
	  operator uint8_t*(){return _byte;} // to make crc8 work // FIXME: this is ugly

} OneWireAddress;

#define FALSE 0
#define TRUE  1

template<class PinType>
class OneWire{
private:

#if ONEWIRE_SEARCH
	// global search state
	OneWireAddress ROM_NO;
	uint8_t LastDiscrepancy;
	uint8_t LastFamilyDiscrepancy;
	uint8_t LastDeviceFlag;
#endif
	const PinType& onewirepin;
public:
	const bool parasite;

	OneWire(PinType pin,bool _parasite=true) :onewirepin(pin),parasite(_parasite){
		onewirepin.modeIn();
#if ONEWIRE_SEARCH
		reset_search();
#endif
	}
	// Perform a 1-Wire reset cycle. Returns 1 if a device responds
	// with a presence pulse.  Returns 0 if there is no device or the
	// bus is shorted or otherwise held low for more than 250uS
	uint8_t reset(void) const {
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );

		uint8_t r;
		uint8_t retries = 125;

		BEGIN_CRITICAL_SECTION();
		onewirepin.modeIn();
		END_CRITICAL_SECTION();
		// wait until the wire is high... just in case
		do {
			if (--retries == 0)
				return 0;
			delayMicroseconds(2);
		} while (! onewirepin.read() );

		BEGIN_CRITICAL_SECTION();
		onewirepin.write(LOW);
		onewirepin.modeOut();	// drive output low
		END_CRITICAL_SECTION();
		delayMicroseconds(480);
		BEGIN_CRITICAL_SECTION();
		onewirepin.modeIn();	// allow it to float
		delayMicroseconds(70);
		r = ! onewirepin.read();
		END_CRITICAL_SECTION();
		delayMicroseconds(410);
		return r;
	}

	// Issue a 1-Wire rom select command, you do the reset first.
	void select (const OneWireAddress rom) const {
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		uint8_t i;

		write(0x55);           // Choose ROM

		for (i = 0; i < 8; i++)
			write(rom[i]);
	}

	// Issue a 1-Wire rom skip command, to address all on bus.
	void skip(void) const{
		write(0xCC);           // Skip ROM
	}

	// Write a byte. If 'power' is one then the wire is held high at
	// the end for parasitically powered devices. You are responsible
	// for eventually depowering it by calling depower() or doing
	// another read or write.
	void write (uint8_t v) const {
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		uint8_t bitMask;

		for (bitMask = 0x01; bitMask; bitMask <<= 1) {
			OneWire::write_bit((bitMask & v) ? 1 : 0);
		}
		if (!parasite) {
			BEGIN_CRITICAL_SECTION();
			onewirepin.modeIn();
			onewirepin.writeLow();
			END_CRITICAL_SECTION();
		}
	}

	void write_bytes(const uint8_t *buf, uint16_t count) const{
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		for (uint16_t i = 0; i < count; i++)
			write(buf[i]);
		if (!parasite) {
			BEGIN_CRITICAL_SECTION();
			onewirepin.modeIn();
			onewirepin.writeLow();
			END_CRITICAL_SECTION();
		}
	}

	// Read a byte.
	uint8_t read(void) const{
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		uint8_t bitMask;
		uint8_t r = 0;

		for (bitMask = 0x01; bitMask; bitMask <<= 1) {
			if (OneWire::read_bit())
				r |= bitMask;
		} LogSubSys(ONEWIRE, "byte %02x\n",r);
		return r;
	}

	void read_bytes(uint8_t *buf, uint16_t count) const{
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		for (uint16_t i = 0; i < count; i++)
			buf[i] = read();
	}

	// Write a bit. The bus is always left powered at the end, see
	// note in write() about that.
	void write_bit(uint8_t v) const {
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		if (v & 1) {
			BEGIN_CRITICAL_SECTION();
			onewirepin.writeLow();
			onewirepin.modeOut();	// drive output low
			delayMicroseconds(10);
			onewirepin.writeHigh();	// drive output high
			END_CRITICAL_SECTION();
			delayMicroseconds(55);
		} else {
			BEGIN_CRITICAL_SECTION();
			onewirepin.writeLow();
			onewirepin.modeOut();	// drive output low
			delayMicroseconds(65);
			onewirepin.writeHigh();		// drive output high
			END_CRITICAL_SECTION();
			delayMicroseconds(5);
		}
	}
	// Read a bit.
	uint8_t read_bit(void) const {
		//LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		uint8_t r;

		BEGIN_CRITICAL_SECTION();
		onewirepin.modeOut();
		onewirepin.writeLow();
		delayMicroseconds(3);
		onewirepin.modeIn();	// let pin float, pull up will raise
		delayMicroseconds(10);
		r = onewirepin.read();
		//r = this->read(); this would select the wrong read and recurse :)
		END_CRITICAL_SECTION();
		delayMicroseconds(53);

		return r;
	}
	// Stop forcing power onto the bus. You only need to do this if
	// you used the 'power' flag to write() or used a write_bit() call
	// and aren't about to do another read or write. You would rather
	// not leave this powered if you don't have to, just in case
	// someone shorts your bus.
	void depower(void) const{
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		BEGIN_CRITICAL_SECTION();
		onewirepin.modeIn();
		END_CRITICAL_SECTION();
	}

#if ONEWIRE_SEARCH
	// Clear the search state so that if will start from the beginning again.
	void reset_search() {
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		// reset the search state
		LastDiscrepancy = 0;
		LastDeviceFlag = FALSE;
		LastFamilyDiscrepancy = 0;
		for (int i = 7;; i--) {
			ROM_NO[i] = 0;
			if (i == 0)
				break;
		}
	}

	// Setup the search to find the device type 'family_code' on the next call
	// to search(*newAddr) if it is present.
	void target_search(uint8_t family_code) 

	{
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		// set the search state to find SearchFamily type devices
		ROM_NO[0] = family_code;
		for (uint8_t i = 1; i < 8; i++)
			ROM_NO[i] = 0;
		LastDiscrepancy = 64;
		LastFamilyDiscrepancy = 0;
		LastDeviceFlag = FALSE;
	}

	// Look for the next device. Returns 1 if a new address has been
	// returned. A zero might mean that the bus is shorted, there are
	// no devices, or you have already retrieved all of them.  It
	// might be a good idea to check the CRC to make sure you didn't
	// get garbage.  The order is deterministic. You will always get
	// the same devices in the same order.
	uint8_t search(OneWireAddress &newAddr, bool search_mode = true) 

	{
		LogSubSys(ONEWIRE,"%s\n", __PRETTY_FUNCTION__ );
		uint8_t id_bit_number;
		uint8_t last_zero, rom_byte_number, search_result;
		uint8_t id_bit, cmp_id_bit;

		unsigned char rom_byte_mask, search_direction;

		// initialize for search
		id_bit_number = 1;
		last_zero = 0;
		rom_byte_number = 0;
		rom_byte_mask = 1;
		search_result = 0;

		// if the last call was not the last one
		if (!LastDeviceFlag) {

			// 1-Wire reset
			if (!reset()) {
				// reset the search
				LastDiscrepancy = 0;
				LastDeviceFlag = FALSE;
				LastFamilyDiscrepancy = 0;
				return FALSE;
			}

			// issue the search command
			if (search_mode == true) {
				write(0xF0);   // NORMAL SEARCH
			} else {
				write(0xEC);   // CONDITIONAL SEARCH
			}

			// loop to do the search
			do {
				// read a bit and its complement
				id_bit = read_bit();
				cmp_id_bit = read_bit();

				// check for no devices on 1-wire
				if ((id_bit == 1) && (cmp_id_bit == 1))
					break;
				else {
					// all devices coupled have 0 or 1
					if (id_bit != cmp_id_bit)
						search_direction = id_bit; // bit write value for search
					else {
						// if this discrepancy if before the Last Discrepancy
						// on a previous next then pick the same as last time
						if (id_bit_number < LastDiscrepancy)
							search_direction = ((ROM_NO[rom_byte_number]
									& rom_byte_mask) > 0);
						else
							// if equal to last pick 1, if not then pick 0
							search_direction =
									(id_bit_number == LastDiscrepancy);

						// if 0 was picked then record its position in LastZero
						if (search_direction == 0) {
							last_zero = id_bit_number;

							// check for Last discrepancy in family
							if (last_zero < 9)
								LastFamilyDiscrepancy = last_zero;
						}
					}

					// set or clear the bit in the ROM byte rom_byte_number
					// with mask rom_byte_mask
					if (search_direction == 1)
						ROM_NO[rom_byte_number] |= rom_byte_mask;
					else
						ROM_NO[rom_byte_number] &= ~rom_byte_mask;

					// serial number search direction write bit
					write_bit(search_direction);

					// increment the byte counter id_bit_number
					// and shift the mask rom_byte_mask
					id_bit_number++;
					rom_byte_mask <<= 1;

					// if the mask is 0 then go to new SerialNum byte rom_byte_number and reset mask
					if (rom_byte_mask == 0) {
						rom_byte_number++;
						rom_byte_mask = 1;
					}
				}
			} while (rom_byte_number < 8); // loop until through all ROM bytes 0-7

			// if the search was successful then
			if (!(id_bit_number < 65)) {
				// search successful so set LastDiscrepancy,LastDeviceFlag,search_result
				LastDiscrepancy = last_zero;

				// check for last device
				if (LastDiscrepancy == 0)
					LastDeviceFlag = TRUE;

				search_result = TRUE;
			}
		}

		// if no device found then reset counters so next 'search' will be like a first
		if (!search_result || !ROM_NO[0]) {
			LastDiscrepancy = 0;
			LastDeviceFlag = FALSE;
			LastFamilyDiscrepancy = 0;
			search_result = FALSE;
		} else {
			for (int i = 0; i < 8; i++)
				newAddr[i] = ROM_NO[i];
		}
		return search_result;
	}

#endif

};

#endif
