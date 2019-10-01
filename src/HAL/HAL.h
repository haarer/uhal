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


#include "HAL_CPU.h"

#include "HAL_Pin.h"

#if defined(__AVR__)
// ---------------------------------- AVR specific ------------------------------------------
#include <avr/io.h>
#include <avr/interrupt.h>

#else
#error "HAL not defined for this architecture"
#endif

// ---------------------------- Timing and CPU Frequency -----------------------------------
#include "HAL_Delay.h"

// ---------------------------- UART subsystem ---------------------------------------------
#include "HAL_UART.h"

// ---------------------------- Interrupt subsystem ----------------------------------------
#include "HAL_Interrupt.h"

#include "HAL_Timer.h"


namespace UHAL
{


template <uint8_t PinNumber>
class HALPin
{
public:
	HALPin()
	{
		#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		static_assert(PinNumber <= 23, "Illegal Pin number");
		#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
		static_assert(PinNumber <= 19, "Illegal Pin number");
		#else
		#error "unknown platform, fix HAL"
		#endif
	}

	inline __attribute__((always_inline)) void mode(uint8_t mode)
	{
		switch (mode)
		{
		case INPUT_PULLUP:
			modeInPullup();
			break;
		case INPUT:
			modeIn();
			break;
		case OUTPUT:
			modeOut();
			break;
		}
	}

#define HAL_CASE_DIR_PIN_OUT(pin_no, reg, bit_no) \
	case pin_no:                                  \
		DDR##reg |= (1 << bit_no);                \
		break;
#define HAL_CASE_DIR_PIN_IN(pin_no, reg, bit_no) \
	case pin_no:                                 \
		DDR##reg &= ~(1 << bit_no);              \
		break;

#define HAL_CASE_DIR_PIN_IN_PULLUP(pin_no, reg, bit_no) \
	case pin_no:                                        \
		DDR##reg &= ~(1 << bit_no);                     \
		PORT##reg |= (1 << bit_no);                     \
		break;

#define HAL_CASE_SET_PIN_HIGH(pin_no, reg, bit_no) \
	case pin_no:                                   \
		PORT##reg |= (1 << bit_no);                \
		break;
#define HAL_CASE_SET_PIN_LOW(pin_no, reg, bit_no) \
	case pin_no:                                  \
		PORT##reg &= ~(1 << bit_no);              \
		break;
#define HAL_CASE_READ_PIN(pin_no, reg, bit_no)                \
	case pin_no:                                              \
		return ((PIN##reg & (1 << bit_no)) == (1 << bit_no)); \
		break;

	inline __attribute__((always_inline)) void modeOut(void)
	{
		switch (PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
			HAL_CASE_DIR_PIN_OUT(0, E, 0)
			HAL_CASE_DIR_PIN_OUT(1, E, 1)
			HAL_CASE_DIR_PIN_OUT(2, E, 4)
			HAL_CASE_DIR_PIN_OUT(3, E, 5)
			HAL_CASE_DIR_PIN_OUT(4, G, 5)
			HAL_CASE_DIR_PIN_OUT(5, E, 3)
			HAL_CASE_DIR_PIN_OUT(6, H, 3)
			HAL_CASE_DIR_PIN_OUT(7, H, 4)

			HAL_CASE_DIR_PIN_OUT(8, H, 5)
			HAL_CASE_DIR_PIN_OUT(9, H, 6)
			HAL_CASE_DIR_PIN_OUT(10, B, 4)
			HAL_CASE_DIR_PIN_OUT(11, B, 5)
			HAL_CASE_DIR_PIN_OUT(12, B, 6)
			HAL_CASE_DIR_PIN_OUT(13, B, 7)
			HAL_CASE_DIR_PIN_OUT(14, J, 1)
			HAL_CASE_DIR_PIN_OUT(15, J, 0)

			HAL_CASE_DIR_PIN_OUT(16, H, 1)
			HAL_CASE_DIR_PIN_OUT(17, H, 0)
			HAL_CASE_DIR_PIN_OUT(18, D, 3)
			HAL_CASE_DIR_PIN_OUT(19, D, 2)
			HAL_CASE_DIR_PIN_OUT(20, D, 1)
			HAL_CASE_DIR_PIN_OUT(21, D, 0)
			HAL_CASE_DIR_PIN_OUT(22, A, 0)
			HAL_CASE_DIR_PIN_OUT(23, A, 1)

#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
			HAL_CASE_DIR_PIN_OUT(0, D, 0)
			HAL_CASE_DIR_PIN_OUT(1, D, 1)
			HAL_CASE_DIR_PIN_OUT(2, D, 2)
			HAL_CASE_DIR_PIN_OUT(3, D, 3)
			HAL_CASE_DIR_PIN_OUT(4, D, 4)
			HAL_CASE_DIR_PIN_OUT(5, D, 5)
			HAL_CASE_DIR_PIN_OUT(6, D, 6)
			HAL_CASE_DIR_PIN_OUT(7, D, 7)

			HAL_CASE_DIR_PIN_OUT(8, B, 0)
			HAL_CASE_DIR_PIN_OUT(9, B, 1)
			HAL_CASE_DIR_PIN_OUT(10, B, 2)
			HAL_CASE_DIR_PIN_OUT(11, B, 3)
			HAL_CASE_DIR_PIN_OUT(12, B, 4)
			HAL_CASE_DIR_PIN_OUT(13, B, 5)
			HAL_CASE_DIR_PIN_OUT(14, C, 0)
			HAL_CASE_DIR_PIN_OUT(15, C, 1)

			HAL_CASE_DIR_PIN_OUT(16, C, 2)
			HAL_CASE_DIR_PIN_OUT(17, C, 3)
			HAL_CASE_DIR_PIN_OUT(18, C, 4)
			HAL_CASE_DIR_PIN_OUT(19, C, 5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline)) void modeIn(void)
	{
		switch (PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

			HAL_CASE_DIR_PIN_IN(0, E, 0)
			HAL_CASE_DIR_PIN_IN(1, E, 1)
			HAL_CASE_DIR_PIN_IN(2, E, 4)
			HAL_CASE_DIR_PIN_IN(3, E, 5)
			HAL_CASE_DIR_PIN_IN(4, G, 5)
			HAL_CASE_DIR_PIN_IN(5, E, 3)
			HAL_CASE_DIR_PIN_IN(6, H, 3)
			HAL_CASE_DIR_PIN_IN(7, H, 4)

			HAL_CASE_DIR_PIN_IN(8, H, 5)
			HAL_CASE_DIR_PIN_IN(9, H, 6)
			HAL_CASE_DIR_PIN_IN(10, B, 4)
			HAL_CASE_DIR_PIN_IN(11, B, 5)
			HAL_CASE_DIR_PIN_IN(12, B, 6)
			HAL_CASE_DIR_PIN_IN(13, B, 7)
			HAL_CASE_DIR_PIN_IN(14, J, 1)
			HAL_CASE_DIR_PIN_IN(15, J, 0)

			HAL_CASE_DIR_PIN_IN(16, H, 1)
			HAL_CASE_DIR_PIN_IN(17, H, 0)
			HAL_CASE_DIR_PIN_IN(18, D, 3)
			HAL_CASE_DIR_PIN_IN(19, D, 2)
			HAL_CASE_DIR_PIN_IN(20, D, 1)
			HAL_CASE_DIR_PIN_IN(21, D, 0)
			HAL_CASE_DIR_PIN_IN(22, A, 0)
			HAL_CASE_DIR_PIN_IN(23, A, 1)

#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
			HAL_CASE_DIR_PIN_IN(0, D, 0)
			HAL_CASE_DIR_PIN_IN(1, D, 1)
			HAL_CASE_DIR_PIN_IN(2, D, 2)
			HAL_CASE_DIR_PIN_IN(3, D, 3)
			HAL_CASE_DIR_PIN_IN(4, D, 4)
			HAL_CASE_DIR_PIN_IN(5, D, 5)
			HAL_CASE_DIR_PIN_IN(6, D, 6)
			HAL_CASE_DIR_PIN_IN(7, D, 7)

			HAL_CASE_DIR_PIN_IN(8, B, 0)
			HAL_CASE_DIR_PIN_IN(9, B, 1)
			HAL_CASE_DIR_PIN_IN(10, B, 2)
			HAL_CASE_DIR_PIN_IN(11, B, 3)
			HAL_CASE_DIR_PIN_IN(12, B, 4)
			HAL_CASE_DIR_PIN_IN(13, B, 5)
			HAL_CASE_DIR_PIN_IN(14, C, 0)
			HAL_CASE_DIR_PIN_IN(15, C, 1)

			HAL_CASE_DIR_PIN_IN(16, C, 2)
			HAL_CASE_DIR_PIN_IN(17, C, 3)
			HAL_CASE_DIR_PIN_IN(18, C, 4)
			HAL_CASE_DIR_PIN_IN(19, C, 5)

#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline)) void modeInPullup(void)
	{
		switch (PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

			HAL_CASE_DIR_PIN_IN_PULLUP(0, E, 0)
			HAL_CASE_DIR_PIN_IN_PULLUP(1, E, 1)
			HAL_CASE_DIR_PIN_IN_PULLUP(2, E, 4)
			HAL_CASE_DIR_PIN_IN_PULLUP(3, E, 5)
			HAL_CASE_DIR_PIN_IN_PULLUP(4, G, 5)
			HAL_CASE_DIR_PIN_IN_PULLUP(5, E, 3)
			HAL_CASE_DIR_PIN_IN_PULLUP(6, H, 3)
			HAL_CASE_DIR_PIN_IN_PULLUP(7, H, 4)

			HAL_CASE_DIR_PIN_IN_PULLUP(8, H, 5)
			HAL_CASE_DIR_PIN_IN_PULLUP(9, H, 6)
			HAL_CASE_DIR_PIN_IN_PULLUP(10, B, 4)
			HAL_CASE_DIR_PIN_IN_PULLUP(11, B, 5)
			HAL_CASE_DIR_PIN_IN_PULLUP(12, B, 6)
			HAL_CASE_DIR_PIN_IN_PULLUP(13, B, 7)
			HAL_CASE_DIR_PIN_IN_PULLUP(14, J, 1)
			HAL_CASE_DIR_PIN_IN_PULLUP(15, J, 0)

			HAL_CASE_DIR_PIN_IN_PULLUP(16, H, 1)
			HAL_CASE_DIR_PIN_IN_PULLUP(17, H, 0)
			HAL_CASE_DIR_PIN_IN_PULLUP(18, D, 3)
			HAL_CASE_DIR_PIN_IN_PULLUP(19, D, 2)
			HAL_CASE_DIR_PIN_IN_PULLUP(20, D, 1)
			HAL_CASE_DIR_PIN_IN_PULLUP(21, D, 0)
			HAL_CASE_DIR_PIN_IN_PULLUP(22, A, 0)
			HAL_CASE_DIR_PIN_IN_PULLUP(23, A, 1)

#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
			HAL_CASE_DIR_PIN_IN_PULLUP(0, D, 0)
			HAL_CASE_DIR_PIN_IN_PULLUP(1, D, 1)
			HAL_CASE_DIR_PIN_IN_PULLUP(2, D, 2)
			HAL_CASE_DIR_PIN_IN_PULLUP(3, D, 3)
			HAL_CASE_DIR_PIN_IN_PULLUP(4, D, 4)
			HAL_CASE_DIR_PIN_IN_PULLUP(5, D, 5)
			HAL_CASE_DIR_PIN_IN_PULLUP(6, D, 6)
			HAL_CASE_DIR_PIN_IN_PULLUP(7, D, 7)

			HAL_CASE_DIR_PIN_IN_PULLUP(8, B, 0)
			HAL_CASE_DIR_PIN_IN_PULLUP(9, B, 1)
			HAL_CASE_DIR_PIN_IN_PULLUP(10, B, 2)
			HAL_CASE_DIR_PIN_IN_PULLUP(11, B, 3)
			HAL_CASE_DIR_PIN_IN_PULLUP(12, B, 4)
			HAL_CASE_DIR_PIN_IN_PULLUP(13, B, 5)
			HAL_CASE_DIR_PIN_IN_PULLUP(14, C, 0)
			HAL_CASE_DIR_PIN_IN_PULLUP(15, C, 1)

			HAL_CASE_DIR_PIN_IN_PULLUP(16, C, 2)
			HAL_CASE_DIR_PIN_IN_PULLUP(17, C, 3)
			HAL_CASE_DIR_PIN_IN_PULLUP(18, C, 4)
			HAL_CASE_DIR_PIN_IN_PULLUP(19, C, 5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline)) void writeHigh(void)
	{
		switch (PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

			HAL_CASE_SET_PIN_HIGH(0, E, 0)
			HAL_CASE_SET_PIN_HIGH(1, E, 1)
			HAL_CASE_SET_PIN_HIGH(2, E, 4)
			HAL_CASE_SET_PIN_HIGH(3, E, 5)
			HAL_CASE_SET_PIN_HIGH(4, G, 5)
			HAL_CASE_SET_PIN_HIGH(5, E, 3)
			HAL_CASE_SET_PIN_HIGH(6, H, 3)
			HAL_CASE_SET_PIN_HIGH(7, H, 4)

			HAL_CASE_SET_PIN_HIGH(8, H, 5)
			HAL_CASE_SET_PIN_HIGH(9, H, 6)
			HAL_CASE_SET_PIN_HIGH(10, B, 4)
			HAL_CASE_SET_PIN_HIGH(11, B, 5)
			HAL_CASE_SET_PIN_HIGH(12, B, 6)
			HAL_CASE_SET_PIN_HIGH(13, B, 7)
			HAL_CASE_SET_PIN_HIGH(14, J, 1)
			HAL_CASE_SET_PIN_HIGH(15, J, 0)

			HAL_CASE_SET_PIN_HIGH(16, H, 1)
			HAL_CASE_SET_PIN_HIGH(17, H, 0)
			HAL_CASE_SET_PIN_HIGH(18, D, 3)
			HAL_CASE_SET_PIN_HIGH(19, D, 2)
			HAL_CASE_SET_PIN_HIGH(20, D, 1)
			HAL_CASE_SET_PIN_HIGH(21, D, 0)
			HAL_CASE_SET_PIN_HIGH(22, A, 0)
			HAL_CASE_SET_PIN_HIGH(23, A, 1)

#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
			HAL_CASE_SET_PIN_HIGH(0, D, 0)
			HAL_CASE_SET_PIN_HIGH(1, D, 1)
			HAL_CASE_SET_PIN_HIGH(2, D, 2)
			HAL_CASE_SET_PIN_HIGH(3, D, 3)
			HAL_CASE_SET_PIN_HIGH(4, D, 4)
			HAL_CASE_SET_PIN_HIGH(5, D, 5)
			HAL_CASE_SET_PIN_HIGH(6, D, 6)
			HAL_CASE_SET_PIN_HIGH(7, D, 7)

			HAL_CASE_SET_PIN_HIGH(8, B, 0)
			HAL_CASE_SET_PIN_HIGH(9, B, 1)
			HAL_CASE_SET_PIN_HIGH(10, B, 2)
			HAL_CASE_SET_PIN_HIGH(11, B, 3)
			HAL_CASE_SET_PIN_HIGH(12, B, 4)
			HAL_CASE_SET_PIN_HIGH(13, B, 5)
			HAL_CASE_SET_PIN_HIGH(14, C, 0)
			HAL_CASE_SET_PIN_HIGH(15, C, 1)

			HAL_CASE_SET_PIN_HIGH(16, C, 2)
			HAL_CASE_SET_PIN_HIGH(17, C, 3)
			HAL_CASE_SET_PIN_HIGH(18, C, 4)
			HAL_CASE_SET_PIN_HIGH(19, C, 5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline)) void writeLow(void)
	{
		switch (PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

			HAL_CASE_SET_PIN_LOW(0, E, 0)
			HAL_CASE_SET_PIN_LOW(1, E, 1)
			HAL_CASE_SET_PIN_LOW(2, E, 4)
			HAL_CASE_SET_PIN_LOW(3, E, 5)
			HAL_CASE_SET_PIN_LOW(4, G, 5)
			HAL_CASE_SET_PIN_LOW(5, E, 3)
			HAL_CASE_SET_PIN_LOW(6, H, 3)
			HAL_CASE_SET_PIN_LOW(7, H, 4)

			HAL_CASE_SET_PIN_LOW(8, H, 5)
			HAL_CASE_SET_PIN_LOW(9, H, 6)
			HAL_CASE_SET_PIN_LOW(10, B, 4)
			HAL_CASE_SET_PIN_LOW(11, B, 5)
			HAL_CASE_SET_PIN_LOW(12, B, 6)
			HAL_CASE_SET_PIN_LOW(13, B, 7)
			HAL_CASE_SET_PIN_LOW(14, J, 1)
			HAL_CASE_SET_PIN_LOW(15, J, 0)

			HAL_CASE_SET_PIN_LOW(16, H, 1)
			HAL_CASE_SET_PIN_LOW(17, H, 0)
			HAL_CASE_SET_PIN_LOW(18, D, 3)
			HAL_CASE_SET_PIN_LOW(19, D, 2)
			HAL_CASE_SET_PIN_LOW(20, D, 1)
			HAL_CASE_SET_PIN_LOW(21, D, 0)
			HAL_CASE_SET_PIN_LOW(22, A, 0)
			HAL_CASE_SET_PIN_LOW(23, A, 1)

#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
			HAL_CASE_SET_PIN_LOW(0, D, 0)
			HAL_CASE_SET_PIN_LOW(1, D, 1)
			HAL_CASE_SET_PIN_LOW(2, D, 2)
			HAL_CASE_SET_PIN_LOW(3, D, 3)
			HAL_CASE_SET_PIN_LOW(4, D, 4)
			HAL_CASE_SET_PIN_LOW(5, D, 5)
			HAL_CASE_SET_PIN_LOW(6, D, 6)
			HAL_CASE_SET_PIN_LOW(7, D, 7)

			HAL_CASE_SET_PIN_LOW(8, B, 0)
			HAL_CASE_SET_PIN_LOW(9, B, 1)
			HAL_CASE_SET_PIN_LOW(10, B, 2)
			HAL_CASE_SET_PIN_LOW(11, B, 3)
			HAL_CASE_SET_PIN_LOW(12, B, 4)
			HAL_CASE_SET_PIN_LOW(13, B, 5)
			HAL_CASE_SET_PIN_LOW(14, C, 0)
			HAL_CASE_SET_PIN_LOW(15, C, 1)

			HAL_CASE_SET_PIN_LOW(16, C, 2)
			HAL_CASE_SET_PIN_LOW(17, C, 3)
			HAL_CASE_SET_PIN_LOW(18, C, 4)
			HAL_CASE_SET_PIN_LOW(19, C, 5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline)) bool readState(void) const
	{
		switch (PinNumber)
		{
#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

			HAL_CASE_READ_PIN(0, E, 0)
			HAL_CASE_READ_PIN(1, E, 1)
			HAL_CASE_READ_PIN(2, E, 4)
			HAL_CASE_READ_PIN(3, E, 5)
			HAL_CASE_READ_PIN(4, G, 5)
			HAL_CASE_READ_PIN(5, E, 3)
			HAL_CASE_READ_PIN(6, H, 3)
			HAL_CASE_READ_PIN(7, H, 4)

			HAL_CASE_READ_PIN(8, H, 5)
			HAL_CASE_READ_PIN(9, H, 6)
			HAL_CASE_READ_PIN(10, B, 4)
			HAL_CASE_READ_PIN(11, B, 5)
			HAL_CASE_READ_PIN(12, B, 6)
			HAL_CASE_READ_PIN(13, B, 7)
			HAL_CASE_READ_PIN(14, J, 1)
			HAL_CASE_READ_PIN(15, J, 0)

			HAL_CASE_READ_PIN(16, H, 1)
			HAL_CASE_READ_PIN(17, H, 0)
			HAL_CASE_READ_PIN(18, D, 3)
			HAL_CASE_READ_PIN(19, D, 2)
			HAL_CASE_READ_PIN(20, D, 1)
			HAL_CASE_READ_PIN(21, D, 0)
			HAL_CASE_READ_PIN(22, A, 0)
			HAL_CASE_READ_PIN(23, A, 1)
#elif defined(__AVR_ATmega168__) || defined(__AVR_ATmega328__) || defined(__AVR_ATmega328P__)
			HAL_CASE_READ_PIN(0, D, 0)
			HAL_CASE_READ_PIN(1, D, 1)
			HAL_CASE_READ_PIN(2, D, 2)
			HAL_CASE_READ_PIN(3, D, 3)
			HAL_CASE_READ_PIN(4, D, 4)
			HAL_CASE_READ_PIN(5, D, 5)
			HAL_CASE_READ_PIN(6, D, 6)
			HAL_CASE_READ_PIN(7, D, 7)

			HAL_CASE_READ_PIN(8, B, 0)
			HAL_CASE_READ_PIN(9, B, 1)
			HAL_CASE_READ_PIN(10, B, 2)
			HAL_CASE_READ_PIN(11, B, 3)
			HAL_CASE_READ_PIN(12, B, 4)
			HAL_CASE_READ_PIN(13, B, 5)
			HAL_CASE_READ_PIN(14, C, 0)
			HAL_CASE_READ_PIN(15, C, 1)

			HAL_CASE_READ_PIN(16, C, 2)
			HAL_CASE_READ_PIN(17, C, 3)
			HAL_CASE_READ_PIN(18, C, 4)
			HAL_CASE_READ_PIN(19, C, 5)
#else
#error "unknown platform, fix HAL"
#endif
		}
	}

	inline __attribute__((always_inline)) void write(bool value)
	{
		switch (value)
		{
		case true:
			writeHigh();
			break;
		case false:
			writeLow();
			break;
		}
	}

	inline __attribute__((always_inline)) bool read(void) const
	{
		return readState();
	}

	inline HALPin &operator=(bool value)
	{
		if (value)
			writeHigh();
		else
			writeLow();
		return *this;
	}

	inline operator bool() const
	{
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



template<uint8_t pinNum> void tmplSetPWM(uint8_t s){}



template <uint8_t PinNum>
class HALPWMPin : public HALPin<PinNum>
{
public:
	HALPWMPin(){};
	inline __attribute__((always_inline)) void setPWM(uint8_t s);

	inline __attribute__((always_inline)) void initPWM(void)
	{
		static_assert(PinNum ==3 ||PinNum ==5 ||PinNum ==6 || PinNum ==10 || PinNum ==11 ,   "PWM Pin not implemented");
	}

	inline __attribute__((always_inline)) void stopPWM(void);
};



template<> void HALPWMPin<3>::stopPWM(void)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning "PWM will not work for pin 3, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// arduino mega: PE5 ( OC3C/INT5 )	Digital pin 3 (PWM)
		TCCR3A &=  ~ _BV(COM3C1);//turn off oc3c
//		TCCR3B = _BV(CS01) | _BV(WGM32);	//8khz
//		OCR3C = 0;

#else
#error "This chip is not supported!"
#endif
}

template<> void HALPWMPin<3>::initPWM(void)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning "PWM will not work for pin 3, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// arduino mega: PE5 ( OC3C/INT5 )	Digital pin 3 (PWM)
		TCCR3A |= _BV(COM3C1) | _BV(WGM30); // fast PWM, turn on oc3c
		TCCR3B = _BV(CS01) | _BV(WGM32);	//8khz
		OCR3C = 0;

#else
#error "This chip is not supported!"
#endif
};

template<> inline __attribute__((always_inline)) void HALPWMPin<5>::initPWM(void)
{
#if defined(__AVR_ATmega8__) || defined(__AVR_ATmega48__) || defined(__AVR_ATmega88__) || defined(__AVR_ATmega168__) || defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega: PE3 ( OC3A/AIN1 )	Digital pin 5 (PWM)
		TCCR3A |= _BV(COM3A1) | _BV(WGM10); // fast PWM, turn on oc3a
		TCCR3B = _BV(CS01) | _BV(WGM12);	//8khz
		OCR3A = 0;
#else
#error "This chip is not supported!"
#endif
};

template<> void HALPWMPin<6>::initPWM(void)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning "PWM will not work for pin 6, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		//arduino mega: PH3 ( OC4A )	Digital pin 6 (PWM)
		TCCR4A |= _BV(COM4A1) | _BV(WGM40); // fast PWM, turn on oc4a
		TCCR4B = _BV(CS41) | _BV(WGM42);	//8khz
		OCR4A = 0;

#else
#error "This chip is not supported!"
#endif
};

template<> void HALPWMPin<10>::initPWM(void)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning "PWM will not work for pin 10, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// arduino mega: pin 10 is now PB4 (OC2A)
		TCCR2A |= _BV(COM2A1) | _BV(WGM21| _BV(WGM20)); // fast PWM, turn on oc2a
		TCCR2B = _BV(CS21) ;	//8khz
		//TCCR4B = 1 | _BV(WGM12);
		OCR2A = 0;

#else
#error "This chip is not supported!"
#endif
};

template<> void HALPWMPin<11>::initPWM(void)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0B / PD5 (pin 5)
		TCCR0A |= _BV(COM0B1) | _BV(WGM00) | _BV(WGM01); // fast PWM, turn on oc0a
		//TCCR0B = freq & 0x7;
		OCR0B = 0;
#warning "PWM will not work for pin 11, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// arduino mega: PB5 ( OC1A/PCINT5 )	Digital pin 11 (PWM)
		TCCR1A |= _BV(COM1A1) | _BV(WGM10); // fast PWM, turn on oc1a
		TCCR1B = _BV(CS01) | _BV(WGM12);	//8khz
		//TCCR4B = 1 | _BV(WGM12);
		OCR1A = 0;

#else
#error "This chip is not supported!"
#endif
};


template<> inline __attribute__((always_inline)) void HALPWMPin<3>::setPWM(uint8_t s)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;
#warning "PWM will not work for pin 3, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega: PE5 ( OC3C/INT5 )	Digital pin 3 (PWM)
		OCR3C = s;
#else
#error "This chip is not supported!"
#endif
}

template<> inline __attribute__((always_inline)) void HALPWMPin<5>::setPWM(uint8_t s)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		//arduino mega: PE3 ( OC3A/AIN1 )	Digital pin 5 (PWM)
		OCR3A = s;
#else
#error "This chip is not supported!"
#endif
};

template<> inline __attribute__((always_inline)) void HALPWMPin<6>::setPWM(uint8_t s)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;

#warning "PWM will not work for pin 6, ocr register raussuchen !"
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega: PH3 ( OC4A )	Digital pin 6 (PWM)
		OCR4A = s;
#else
#error "This chip is not supported!"
#endif
}


template<> inline __attribute__((always_inline)) void HALPWMPin<10>::setPWM(uint8_t s)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;
#warning "PWM will not work for pin 11, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega: PB4 ( OC2A/PCINT4 )	Digital pin 10 (PWM)
		OCR2A = s;
#else
#error "This chip is not supported!"
#endif
};

template<> inline __attribute__((always_inline)) void HALPWMPin<11>::setPWM(uint8_t s)
{
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)
		// use PWM from timer0A on PB3 (Arduino pin #6)
		OCR0B = s;
#warning "PWM will not work for pin 11, ocr register raussuchen !"

#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)
		// on arduino mega: PB5 ( OC1A/PCINT5 )	Digital pin 11 (PWM)
		OCR1A = s;
#else
#error "This chip is not supported!"
#endif
};


}//namespace UHAL

#endif /* HAL_H_ */
