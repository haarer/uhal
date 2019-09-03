/*
 * HAL.h
 *
 *Hardware abstraction layer for embedded development
 * Supported Platforms: AVR
 *
 *
 *ToDo: select pin implementation alternative (template / switch based vs pinmap based), compare performance
 *ToDo: separate subsystems (uart, timer .. ) into separate files
 *ToDo: create system for board selection
 *
 * FixMe: define all pins for mega (stellantrieb is broken !!)
 * FixMe: define all pins for arduion uno
 * Created: 31.01.2017 11:50:07
 *  Author: (c) Alexander Haarer 2017 License CC BY-SA
 */

#ifndef HAL_H_
#define HAL_H_
#include <stdint.h>


#if defined(__AVR__)

// ---------------------------------- AVR specific ------------------------------------------
#include <avr/io.h>
#include <avr/interrupt.h>

//tbd needs board selection
#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif

#include <util/delay.h>

#define delay(d)	_delay_ms(d);

#define delayMicroseconds( us) _delay_us(us)

#define BEGIN_CRITICAL_SECTION(a) { uint8_t __s; __s = SREG; cli();

#define END_CRITICAL_SECTION(a) SREG=__s;}


#else
#error "HAL not defined for this architecture"
#endif




// ---------------------------- UART subsystem ---------------------------------------------
#include "HAL_UART.h"

// ---------------------------- Interrupt subsystem ----------------------------------------
#include "HAL_Interrupt.h"

#include "HAL_Timer.h"

#define HIGH 0x1
#define LOW  0x0

#define INPUT 0x0
#define OUTPUT 0x1
#define INPUT_PULLUP 0x2

#ifdef OLD_HAL
#warning "legacy HAL implementation selected"
/** GpioPinMap type */
struct GpioPinMap_t {
	volatile uint8_t* pin; /**< address of PIN for this pin */
	volatile uint8_t* ddr; /**< address of DDR for this pin */
	volatile uint8_t* port; /**< address of PORT for this pin */
	uint8_t mask; /**< bit mask for this pin */
};


#if defined(__AVR_ATmega168__)\
||defined(__AVR_ATmega168P__)\
||defined(__AVR_ATmega328__)\
||defined(__AVR_ATmega328P__)
#pragma message("HAL Target AVR Atmega 168/328")
#elif defined(__AVR_ATmega2560__)
#pragma message("HAL Target AVR Atmega 2560")
#else
#error "unknown architecture, fix HAL !"
#endif

/** Initializer macro. */
#define GPIO_PIN(reg, bit) {&PIN##reg, &DDR##reg, &PORT##reg, 1 << bit}

#if defined(__AVR_ATmega168__)\
||defined(__AVR_ATmega168P__)\
||defined(__AVR_ATmega328P__)
// 168 and 328 Arduinos
#include "UnoGpioPinMap.h"
#define NUM_DIGITAL_PINS            20

#elif defined(__AVR_ATmega1280__)\
|| defined(__AVR_ATmega2560__)
// Mega ADK

#include "MegaGpioPinMap.h"
#define NUM_DIGITAL_PINS            70

#else  // 1284P, 1284, 644
#error Unknown board type, define board type and add pinmap header file
#endif

//------------------------------------------------------------------------------
/** generate bad pin number error */
void badPinNumber(void)
		__attribute__((error("Pin number is too large or not a constant")));
//------------------------------------------------------------------------------
/** Check for valid pin number
 * @param[in] pin Number of pin to be checked.
 */
static inline __attribute__((always_inline))
void badPinCheck(uint8_t pin) {
	if (!__builtin_constant_p(pin) || pin >= NUM_DIGITAL_PINS) {
		badPinNumber();
	}
}
//------------------------------------------------------------------------------
/** DDR register address
 * @param[in] pin Arduino pin number
 * @return register address
 */
static inline __attribute__((always_inline))
 volatile uint8_t* ddrReg(
		uint8_t pin) {
	badPinCheck(pin);
	return GpioPinMap[pin].ddr;
}
//------------------------------------------------------------------------------
/** Bit mask for pin
 * @param[in] pin Arduino pin number
 * @return mask
 */
static inline __attribute__((always_inline))
 uint8_t pinMask(uint8_t pin) {
	badPinCheck(pin);
	return GpioPinMap[pin].mask;
}
//------------------------------------------------------------------------------
/** PIN register address
 * @param[in] pin Arduino pin number
 * @return register address
 */
static inline __attribute__((always_inline))
 volatile uint8_t* pinReg(
		uint8_t pin) {
	badPinCheck(pin);
	return GpioPinMap[pin].pin;
}
//------------------------------------------------------------------------------
/** PORT register address
 * @param[in] pin Arduino pin number
 * @return register address
 */
static inline __attribute__((always_inline))
 volatile uint8_t* portReg(
		uint8_t pin) {
	badPinCheck(pin);
	return GpioPinMap[pin].port;
}
//------------------------------------------------------------------------------
/** Fast write helper.
 * @param[in] address I/O register address
 * @param[in] mask bit mask for pin
 * @param[in] level value for bit
 */
static inline __attribute__((always_inline))
void fastBitWriteSafe(volatile uint8_t* address, uint8_t mask, bool level) {
	uint8_t s;
	if (address > reinterpret_cast<uint8_t*>(0X3F)) {
		s = SREG;
		cli();
	}
	if (level) {
		*address |= mask;
	} else {
		*address &= ~mask;
	}
	if (address > reinterpret_cast<uint8_t*>(0X3F)) {
		SREG = s;
	}
}

//--------------------------------------------------------------------------------
static inline __attribute__((always_inline))
bool fastDigitalRead(uint8_t pin) {
	return *pinReg(pin) & pinMask(pin);
}

static inline __attribute__((always_inline))
void fastDigitalWrite(uint8_t pin, bool level) {
	fastBitWriteSafe(portReg(pin), pinMask(pin), level);
}

static inline __attribute__((always_inline))
void fastDdrWrite(uint8_t pin, bool level) {
	fastBitWriteSafe(ddrReg(pin), pinMask(pin), level);
}

static inline __attribute__((always_inline))
void fastPinMode(uint8_t pin, uint8_t mode) {
	fastDdrWrite(pin, mode == OUTPUT);
	if (mode != OUTPUT) {
		fastDigitalWrite(pin, mode == INPUT_PULLUP);
	}
}

#endif

template<uint8_t PinNumber>
class HALPin {
public:
	HALPin() {
	}

	inline __attribute__((always_inline))
	void mode(uint8_t mode) {
#ifdef OLD_HAL
		fastPinMode(PinNumber, mode);
#else
		switch(mode)
		{
		case INPUT_PULLUP: modeInPullup(); break;
		case INPUT: modeIn(); break;
		case OUTPUT: modeOut(); break;
		}
#endif
	}

#ifndef OLD_HAL
#define HAL_CASE_DIR_PIN_OUT(pin_no,reg ,bit_no)  case  pin_no: DDR##reg  |=  (1 << bit_no); break;
#define HAL_CASE_DIR_PIN_IN(pin_no,reg ,bit_no)   case  pin_no: DDR##reg  &= ~(1 << bit_no); break;

#define HAL_CASE_DIR_PIN_IN_PULLUP(pin_no,reg ,bit_no)   case  pin_no: DDR##reg  &= ~(1 << bit_no); PORT##reg |=  (1 << bit_no); break;

#define HAL_CASE_SET_PIN_HIGH(pin_no,reg ,bit_no) case  pin_no: PORT##reg |=  (1 << bit_no); break;
#define HAL_CASE_SET_PIN_LOW(pin_no,reg ,bit_no)  case  pin_no: PORT##reg &= ~(1 << bit_no); break;
#define HAL_CASE_READ_PIN(pin_no,reg ,bit_no)  case  pin_no: return ( ( PIN##reg &  (1 << bit_no) ) == (1 << bit_no)) ; break;

	inline __attribute__((always_inline))
	void modeOut(void)
	{
		switch(PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
			HAL_CASE_DIR_PIN_OUT(0,E,0)
			HAL_CASE_DIR_PIN_OUT(1,E,1)
			HAL_CASE_DIR_PIN_OUT(2,E,4)
			HAL_CASE_DIR_PIN_OUT(3,E,5)
			HAL_CASE_DIR_PIN_OUT(4,G,5)
			HAL_CASE_DIR_PIN_OUT(5,E,3)
			HAL_CASE_DIR_PIN_OUT(6,H,3)
			HAL_CASE_DIR_PIN_OUT(7,H,4)

			HAL_CASE_DIR_PIN_OUT(8,H,5)
			HAL_CASE_DIR_PIN_OUT(9,H,6)
			HAL_CASE_DIR_PIN_OUT(10,B,4)
			HAL_CASE_DIR_PIN_OUT(11,B,5)
			HAL_CASE_DIR_PIN_OUT(12,B,6)
			HAL_CASE_DIR_PIN_OUT(13,B,7)
			HAL_CASE_DIR_PIN_OUT(16,H,1)
#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
		HAL_CASE_DIR_PIN_OUT(0,D,0)
		HAL_CASE_DIR_PIN_OUT(1,D,1)
		HAL_CASE_DIR_PIN_OUT(2,D,2)
		HAL_CASE_DIR_PIN_OUT(3,D,3)
		HAL_CASE_DIR_PIN_OUT(4,D,4)
		HAL_CASE_DIR_PIN_OUT(5,D,5)
		HAL_CASE_DIR_PIN_OUT(6,D,6)
		HAL_CASE_DIR_PIN_OUT(7,D,7)

		HAL_CASE_DIR_PIN_OUT(8,B,0)
		HAL_CASE_DIR_PIN_OUT(9,B,1)
		HAL_CASE_DIR_PIN_OUT(10,B,2)
		HAL_CASE_DIR_PIN_OUT(11,B,3)
		HAL_CASE_DIR_PIN_OUT(12,B,4)
		HAL_CASE_DIR_PIN_OUT(13,B,5)
		HAL_CASE_DIR_PIN_OUT(14,C,0)
		HAL_CASE_DIR_PIN_OUT(15,C,1)

		HAL_CASE_DIR_PIN_OUT(16,C,2)
		HAL_CASE_DIR_PIN_OUT(17,C,3)
		HAL_CASE_DIR_PIN_OUT(18,C,4)
		HAL_CASE_DIR_PIN_OUT(19,C,5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline))
	void modeIn(void)
	{
		switch(PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

		HAL_CASE_DIR_PIN_IN(0,E,0)
		HAL_CASE_DIR_PIN_IN(1,E,1)
		HAL_CASE_DIR_PIN_IN(2,E,4)
		HAL_CASE_DIR_PIN_IN(3,E,5)
		HAL_CASE_DIR_PIN_IN(4,G,5)
		HAL_CASE_DIR_PIN_IN(5,E,3)
		HAL_CASE_DIR_PIN_IN(6,H,3)
		HAL_CASE_DIR_PIN_IN(7,H,4)

		HAL_CASE_DIR_PIN_IN(8,H,5)
		HAL_CASE_DIR_PIN_IN(9,H,6)
		HAL_CASE_DIR_PIN_IN(10,B,4)
		HAL_CASE_DIR_PIN_IN(11,B,5)
		HAL_CASE_DIR_PIN_IN(12,B,6)
		HAL_CASE_DIR_PIN_IN(13,B,7)
		HAL_CASE_DIR_PIN_IN(14,J,1)
		HAL_CASE_DIR_PIN_IN(15,J,0)
		HAL_CASE_DIR_PIN_IN(16,H,1)
#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
		HAL_CASE_DIR_PIN_IN(0,D,0)
		HAL_CASE_DIR_PIN_IN(1,D,1)
		HAL_CASE_DIR_PIN_IN(2,D,2)
		HAL_CASE_DIR_PIN_IN(3,D,3)
		HAL_CASE_DIR_PIN_IN(4,D,4)
		HAL_CASE_DIR_PIN_IN(5,D,5)
		HAL_CASE_DIR_PIN_IN(6,D,6)
		HAL_CASE_DIR_PIN_IN(7,D,7)

		HAL_CASE_DIR_PIN_IN(8,B,0)
		HAL_CASE_DIR_PIN_IN(9,B,1)
		HAL_CASE_DIR_PIN_IN(10,B,2)
		HAL_CASE_DIR_PIN_IN(11,B,3)
		HAL_CASE_DIR_PIN_IN(12,B,4)
		HAL_CASE_DIR_PIN_IN(13,B,5)
		HAL_CASE_DIR_PIN_IN(14,C,0)
		HAL_CASE_DIR_PIN_IN(15,C,1)

		HAL_CASE_DIR_PIN_IN(16,C,2)
		HAL_CASE_DIR_PIN_IN(17,C,3)
		HAL_CASE_DIR_PIN_IN(18,C,4)
		HAL_CASE_DIR_PIN_IN(19,C,5)

#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline))
	void modeInPullup(void)
	{
		switch(PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

		HAL_CASE_DIR_PIN_IN_PULLUP(0,E,0)
		HAL_CASE_DIR_PIN_IN_PULLUP(1,E,1)
		HAL_CASE_DIR_PIN_IN_PULLUP(2,E,4)
		HAL_CASE_DIR_PIN_IN_PULLUP(3,E,5)
		HAL_CASE_DIR_PIN_IN_PULLUP(4,G,5)
		HAL_CASE_DIR_PIN_IN_PULLUP(5,E,3)
		HAL_CASE_DIR_PIN_IN_PULLUP(6,H,3)
		HAL_CASE_DIR_PIN_IN_PULLUP(7,H,4)

		HAL_CASE_DIR_PIN_IN_PULLUP(8,H,5)
		HAL_CASE_DIR_PIN_IN_PULLUP(9,H,6)
		HAL_CASE_DIR_PIN_IN_PULLUP(10,B,4)
		HAL_CASE_DIR_PIN_IN_PULLUP(11,B,5)
		HAL_CASE_DIR_PIN_IN_PULLUP(12,B,6)
		HAL_CASE_DIR_PIN_IN_PULLUP(13,B,7)
		HAL_CASE_DIR_PIN_IN_PULLUP(16,H,1)

#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
		HAL_CASE_DIR_PIN_IN_PULLUP(0,D,0)
		HAL_CASE_DIR_PIN_IN_PULLUP(1,D,1)
		HAL_CASE_DIR_PIN_IN_PULLUP(2,D,2)
		HAL_CASE_DIR_PIN_IN_PULLUP(3,D,3)
		HAL_CASE_DIR_PIN_IN_PULLUP(4,D,4)
		HAL_CASE_DIR_PIN_IN_PULLUP(5,D,5)
		HAL_CASE_DIR_PIN_IN_PULLUP(6,D,6)
		HAL_CASE_DIR_PIN_IN_PULLUP(7,D,7)

		HAL_CASE_DIR_PIN_IN_PULLUP(8,B,0)
		HAL_CASE_DIR_PIN_IN_PULLUP(9,B,1)
		HAL_CASE_DIR_PIN_IN_PULLUP(10,B,2)
		HAL_CASE_DIR_PIN_IN_PULLUP(11,B,3)
		HAL_CASE_DIR_PIN_IN_PULLUP(12,B,4)
		HAL_CASE_DIR_PIN_IN_PULLUP(13,B,5)
		HAL_CASE_DIR_PIN_IN_PULLUP(14,C,0)
		HAL_CASE_DIR_PIN_IN_PULLUP(15,C,1)

		HAL_CASE_DIR_PIN_IN_PULLUP(16,C,2)
		HAL_CASE_DIR_PIN_IN_PULLUP(17,C,3)
		HAL_CASE_DIR_PIN_IN_PULLUP(18,C,4)
		HAL_CASE_DIR_PIN_IN_PULLUP(19,C,5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}


	inline __attribute__((always_inline))
	void writeHigh(void)
	{
		switch(PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

		HAL_CASE_SET_PIN_HIGH(0,E,0)
		HAL_CASE_SET_PIN_HIGH(1,E,1)
		HAL_CASE_SET_PIN_HIGH(2,E,4)
		HAL_CASE_SET_PIN_HIGH(3,E,5)
		HAL_CASE_SET_PIN_HIGH(4,G,5)
		HAL_CASE_SET_PIN_HIGH(5,E,3)
		HAL_CASE_SET_PIN_HIGH(6,H,3)
		HAL_CASE_SET_PIN_HIGH(7,H,4)

		HAL_CASE_SET_PIN_HIGH(8,H,5)
		HAL_CASE_SET_PIN_HIGH(9,H,6)
		HAL_CASE_SET_PIN_HIGH(10,B,4)
		HAL_CASE_SET_PIN_HIGH(11,B,5)
		HAL_CASE_SET_PIN_HIGH(12,B,6)
		HAL_CASE_SET_PIN_HIGH(13,B,7)
		HAL_CASE_SET_PIN_HIGH(16,H,1)
#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
		HAL_CASE_SET_PIN_HIGH(0,D,0)
		HAL_CASE_SET_PIN_HIGH(1,D,1)
		HAL_CASE_SET_PIN_HIGH(2,D,2)
		HAL_CASE_SET_PIN_HIGH(3,D,3)
		HAL_CASE_SET_PIN_HIGH(4,D,4)
		HAL_CASE_SET_PIN_HIGH(5,D,5)
		HAL_CASE_SET_PIN_HIGH(6,D,6)
		HAL_CASE_SET_PIN_HIGH(7,D,7)

		HAL_CASE_SET_PIN_HIGH(8,B,0)
		HAL_CASE_SET_PIN_HIGH(9,B,1)
		HAL_CASE_SET_PIN_HIGH(10,B,2)
		HAL_CASE_SET_PIN_HIGH(11,B,3)
		HAL_CASE_SET_PIN_HIGH(12,B,4)
		HAL_CASE_SET_PIN_HIGH(13,B,5)
		HAL_CASE_SET_PIN_HIGH(14,C,0)
		HAL_CASE_SET_PIN_HIGH(15,C,1)

		HAL_CASE_SET_PIN_HIGH(16,C,2)
		HAL_CASE_SET_PIN_HIGH(17,C,3)
		HAL_CASE_SET_PIN_HIGH(18,C,4)
		HAL_CASE_SET_PIN_HIGH(19,C,5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline))
	void writeLow(void)
	{
		switch(PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

		HAL_CASE_SET_PIN_LOW(0,E,0)
		HAL_CASE_SET_PIN_LOW(1,E,1)
		HAL_CASE_SET_PIN_LOW(2,E,4)
		HAL_CASE_SET_PIN_LOW(3,E,5)
		HAL_CASE_SET_PIN_LOW(4,G,5)
		HAL_CASE_SET_PIN_LOW(5,E,3)
		HAL_CASE_SET_PIN_LOW(6,H,3)
		HAL_CASE_SET_PIN_LOW(7,H,4)

		HAL_CASE_SET_PIN_LOW(8,H,5)
		HAL_CASE_SET_PIN_LOW(9,H,6)
		HAL_CASE_SET_PIN_LOW(10,B,4)
		HAL_CASE_SET_PIN_LOW(11,B,5)
		HAL_CASE_SET_PIN_LOW(12,B,6)
		HAL_CASE_SET_PIN_LOW(13,B,7)
		HAL_CASE_SET_PIN_LOW(16,H,1)
#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
		HAL_CASE_SET_PIN_LOW(0,D,0)
		HAL_CASE_SET_PIN_LOW(1,D,1)
		HAL_CASE_SET_PIN_LOW(2,D,2)
		HAL_CASE_SET_PIN_LOW(3,D,3)
		HAL_CASE_SET_PIN_LOW(4,D,4)
		HAL_CASE_SET_PIN_LOW(5,D,5)
		HAL_CASE_SET_PIN_LOW(6,D,6)
		HAL_CASE_SET_PIN_LOW(7,D,7)

		HAL_CASE_SET_PIN_LOW(8,B,0)
		HAL_CASE_SET_PIN_LOW(9,B,1)
		HAL_CASE_SET_PIN_LOW(10,B,2)
		HAL_CASE_SET_PIN_LOW(11,B,3)
		HAL_CASE_SET_PIN_LOW(12,B,4)
		HAL_CASE_SET_PIN_LOW(13,B,5)
		HAL_CASE_SET_PIN_LOW(14,C,0)
		HAL_CASE_SET_PIN_LOW(15,C,1)

		HAL_CASE_SET_PIN_LOW(16,C,2)
		HAL_CASE_SET_PIN_LOW(17,C,3)
		HAL_CASE_SET_PIN_LOW(18,C,4)
		HAL_CASE_SET_PIN_LOW(19,C,5)
#else
#error "unknown platform, fix HAL"
#endif
			}
	}






	inline __attribute__((always_inline))
	bool readState(void) const {

		//return fastDigitalRead(PinNumber);

		switch(PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

		HAL_CASE_READ_PIN(0,E,0)
		HAL_CASE_READ_PIN(1,E,1)
		HAL_CASE_READ_PIN(2,E,4)
		HAL_CASE_READ_PIN(3,E,5)
		HAL_CASE_READ_PIN(4,G,5)
		HAL_CASE_READ_PIN(5,E,3)
		HAL_CASE_READ_PIN(6,H,3)
		HAL_CASE_READ_PIN(7,H,4)

		HAL_CASE_READ_PIN(8,H,5)
		HAL_CASE_READ_PIN(9,H,6)
		HAL_CASE_READ_PIN(10,B,4)
		HAL_CASE_READ_PIN(11,B,5)
		HAL_CASE_READ_PIN(12,B,6)
		HAL_CASE_READ_PIN(13,B,7)
		HAL_CASE_READ_PIN(16,H,1)
#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
		HAL_CASE_READ_PIN(0,D,0)
		HAL_CASE_READ_PIN(1,D,1)
		HAL_CASE_READ_PIN(2,D,2)
		HAL_CASE_READ_PIN(3,D,3)
		HAL_CASE_READ_PIN(4,D,4)
		HAL_CASE_READ_PIN(5,D,5)
		HAL_CASE_READ_PIN(6,D,6)
		HAL_CASE_READ_PIN(7,D,7)

		HAL_CASE_READ_PIN(8,B,0)
		HAL_CASE_READ_PIN(9,B,1)
		HAL_CASE_READ_PIN(10,B,2)
		HAL_CASE_READ_PIN(11,B,3)
		HAL_CASE_READ_PIN(12,B,4)
		HAL_CASE_READ_PIN(13,B,5)
		HAL_CASE_READ_PIN(14,C,0)
		HAL_CASE_READ_PIN(15,C,1)

		HAL_CASE_READ_PIN(16,C,2)
		HAL_CASE_READ_PIN(17,C,3)
		HAL_CASE_READ_PIN(18,C,4)
		HAL_CASE_READ_PIN(19,C,5)
#else
#error "unknown platform, fix HAL"
#endif
			}
	}


#endif

	inline __attribute__((always_inline))
	void write(bool value) {
#ifdef OLD_HAL
		fastDigitalWrite(PinNumber, value);
#else
		switch(value)
		{
		case true: writeHigh(); break;
		case false: writeLow(); break;
		}

#endif
	}

	inline __attribute__((always_inline))
	bool read(void) const{
#ifdef OLD_HAL
		return fastDigitalRead(PinNumber);
#else
		return readState();
#endif
	}



	inline HALPin & operator =(bool value) {
#ifdef OLD_HAL
		write(value);
#else
		if (value)
			writeHigh();
		else
			writeLow();
#endif
		return *this;
	}

	inline operator bool() const {
		return read();
	}
};

/* arduino mega <timer> <port> <arduino pin>
 TIMER3B	, // PE 4 ** 2 ** PWM2
 TIMER3C	, // PE 5 ** 3 ** PWM3
 TIMER0B	, // PG 5 ** 4 ** PWM4
 TIMER3A	, // PE 3 ** 5 ** PWM5
 TIMER4A	, // PH 3 ** 6 ** PWM6
 TIMER4B	, // PH 4 ** 7 ** PWM7
 TIMER4C	, // PH 5 ** 8 ** PWM8
 TIMER2B	, // PH 6 ** 9 ** PWM9
 TIMER2A	, // PB 4 ** 10 ** PWM10
 TIMER1A	, // PB 5 ** 11 ** PWM11
 TIMER1B	, // PB 6 ** 12 ** PWM12
 TIMER0A	, // PB 7 ** 13 ** PWM13
 */

//helper to init pwm capable pins
static inline __attribute__((always_inline))
void fastinitPWM(uint8_t pinNum) {
	switch (pinNum) {

	case 5:
#if defined(__AVR_ATmega8__) || defined(__AVR_ATmega48__) || defined(__AVR_ATmega88__) || defined(__AVR_ATmega168__) ||	defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 5 is  PE3 (OC3A)
		TCCR3A |= _BV(COM3A1) | _BV(WGM10);// fast PWM, turn on oc3a
		TCCR3B = _BV(CS01) | _BV(WGM12);//8khz
		OCR3A = 0;

#else
#error "This chip is not supported!"
#endif

		break;

	case 6:
#if defined(__AVR_ATmega8__) || \
			defined(__AVR_ATmega48__) || \
			defined(__AVR_ATmega88__) || \
			defined(__AVR_ATmega168__) || \
			defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning  "PWM will not work for pin 6, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 11 is  PH3 (OC4A)
		TCCR4A |= _BV(COM4A1) | _BV(WGM10);// fast PWM, turn on oc3a
		TCCR4B = _BV(CS01) | _BV(WGM12);//8khz
		OCR4A = 0;

#else
#error "This chip is not supported!"
#endif

		break;

	case 3:
#if defined(__AVR_ATmega8__) || \
			defined(__AVR_ATmega48__) || \
			defined(__AVR_ATmega88__) || \
			defined(__AVR_ATmega168__) || \
			defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning  "PWM will not work for pin 3, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 3 is now PE5 (OC3C)
		TCCR3A |= _BV(COM3C1) | _BV(WGM30);// fast PWM, turn on oc3a
		TCCR3B = _BV(CS01) | _BV(WGM32);//8khz
		OCR3C = 0;

#else
#error "This chip is not supported!"
#endif

		break;

	case 11:
#if defined(__AVR_ATmega8__) || \
			defined(__AVR_ATmega48__) || \
			defined(__AVR_ATmega88__) || \
			defined(__AVR_ATmega168__) || \
			defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning  "PWM will not work for pin 11, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 11 is now PB5 (OC1A)
		TCCR1A |= _BV(COM1A1) | _BV(WGM10);// fast PWM, turn on oc3a
		TCCR1B = _BV(CS01) | _BV(WGM12);//8khz
		//TCCR4B = 1 | _BV(WGM12);
		OCR1A = 0;

#else
#error "This chip is not supported!"
#endif

		break;
	}
}

//helper to set pwm capable pins
static inline __attribute__((always_inline))
void fastsetPWM(uint8_t pinNum, uint8_t s) {
	switch (pinNum) {

	case 5:

#if defined(__AVR_ATmega8__) || \
			defined(__AVR_ATmega48__) || \
			defined(__AVR_ATmega88__) || \
			defined(__AVR_ATmega168__) || \
			defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 6 is now PH3 (OC4A)
		OCR3A = s;
#else
#error "This chip is not supported!"
#endif

		break;

	case 6:
#if defined(__AVR_ATmega8__) || \
			defined(__AVR_ATmega48__) || \
			defined(__AVR_ATmega88__) || \
			defined(__AVR_ATmega168__) || \
			defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;

#warning  "PWM will not work for pin 6, ocr register raussuchen !"
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 6 is now PH3 (OC4A)
		OCR4A = s;
#else
#error "This chip is not supported!"
#endif
		break;

	case 3:
#if defined(__AVR_ATmega8__) || \
			defined(__AVR_ATmega48__) || \
			defined(__AVR_ATmega88__) || \
			defined(__AVR_ATmega168__) || \
			defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;
#warning  "PWM will not work for pin 3, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 6 is now PH3 (OC4A)
		OCR3C = s;
#else
#error "This chip is not supported!"
#endif
		break;

	case 11:
#if defined(__AVR_ATmega8__) || \
			defined(__AVR_ATmega48__) || \
			defined(__AVR_ATmega88__) || \
			defined(__AVR_ATmega168__) || \
			defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;
#warning  "PWM will not work for pin 11, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega, pin 6 is now PH3 (OC4A)
		OCR1A = s;
#else
#error "This chip is not supported!"
#endif
		break;
	}
}

template<uint8_t PinNum>
class HALPWMPin: public HALPin<PinNum> {
public:
	HALPWMPin() {
	}
	;
	inline __attribute__((always_inline))
	void setPWM(uint8_t s) {
		fastsetPWM(PinNum, s);
	}

	inline __attribute__((always_inline))
	void initPWM(void) {
		fastinitPWM(PinNum);
	}

};




#endif /* HAL_H_ */