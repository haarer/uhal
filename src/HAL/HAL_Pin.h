#ifndef HAL_PIN_H_
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

template<int PinNumber>class GenericPin{
public:
	GenericPin()
	{};
	static inline void mode(uint8_t mode) ;
	static inline const __attribute__((always_inline)) void modeOut(void) ;
	static inline const __attribute__((always_inline)) void modeIn(void) ;
	static inline const __attribute__((always_inline)) void modeInPullup(void); 
	static inline const __attribute__((always_inline)) void writeHigh(void) ;
	static inline const __attribute__((always_inline)) void writeLow(void) ;
	static inline __attribute__((always_inline)) bool readState(void) ;
	static inline __attribute__((always_inline)) void write(bool value) ;
	static inline __attribute__((always_inline)) bool read(void) ;

	inline GenericPin &operator=(const bool value)
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


template<int PinNumber> inline void GenericPin<PinNumber>::mode(uint8_t mode)  {
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


template<int PinNumber> inline void GenericPin<PinNumber>::write(bool value)  {
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

template<int PinNumber> inline bool GenericPin<PinNumber>::read(void) {
		return readState();
}


template <uint8_t PinNum>
class GenericPWMPin : public GenericPin<PinNum>
{
public:
	GenericPWMPin(){};
	inline __attribute__((always_inline)) void setPWM(uint8_t s);

	inline __attribute__((always_inline)) void initPWM(void);

	inline __attribute__((always_inline)) void stopPWM(void);
};




}//namespace uhal

#if defined(__AVR__)
#include "avr/avr_pin.h"
#elif defined (__ESP32__)
#include "esp32/esp32_pin.h"
#elif defined (STM32F1)
#include "stm32/stm32_pin.h"
#else
#error "unknown Platform"
#endif


#endif //HAL_PIN_H_