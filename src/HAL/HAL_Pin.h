#ifndef HALK_PIN_H_
#define HAL_PIN_H_

#include <stdint.h>
#include "HAL_CPU.h"



namespace UHAL
{

	static const uint8_t INPUT = 0x0;
	static const uint8_t OUTPUT = 0x1;
	static const uint8_t INPUT_PULLUP = 0x2;
	static const uint8_t HIGH = 0x1;
	static const uint8_t LOW = 0x0;

template<auto cpu,int PinNumber>class GenericPin{
public:
	GenericPin()
	{};
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
	inline __attribute__((always_inline)) void modeOut(void);
	inline __attribute__((always_inline)) void modeIn(void);
	inline __attribute__((always_inline)) void modeInPullup(void);
	inline __attribute__((always_inline)) void writeHigh(void);
	inline __attribute__((always_inline)) void writeLow(void);
	inline __attribute__((always_inline)) bool readState(void) const;
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
    };

	inline __attribute__((always_inline)) bool read(void) const;
	inline GenericPin &operator=(bool value)
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



}

#if defined(__AVR__)
#include "avr/avr_pin.h"
#elif defined (__ESP32__)
#include "esp32/esp32_pin.h"
#else
#error "unknown Platform"
#endif


#endif //HAL_PIN_H_