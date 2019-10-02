#ifndef AVR_PIN_H_
#define AVR_PIN_H_

#include "avr_cpu.h"


// ---------------------------------- AVR specific ------------------------------------------
#include <avr/io.h>
#include <avr/interrupt.h>


namespace UHAL
{
#define HAL_AVR_DIR_PIN_OUT(reg, bit_no) \
		DDR##reg |= (1 << bit_no);                
#define HAL_AVR_DIR_PIN_IN(reg, bit_no) \
		DDR##reg &= ~(1 << bit_no);              
#define HAL_AVR_DIR_PIN_IN_PULLUP(reg, bit_no) \
		DDR##reg &= ~(1 << bit_no);                     \
		PORT##reg |= (1 << bit_no);                     
#define HAL_AVR_SET_PIN_HIGH(reg, bit_no) \
		PORT##reg |= (1 << bit_no);                
#define HAL_AVR_SET_PIN_LOW(reg, bit_no) \
		PORT##reg &= ~(1 << bit_no);              
#define HAL_AVR_READ_PIN(reg, bit_no)                \
		return ((PIN##reg & (1 << bit_no)) == (1 << bit_no)); 

//#if defined( __AVR_ATmega2560__)
using pins= GenericCPU<AVR_ATmega2560>::cpu_pins;

template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PE5>::modeOut(void)     {HAL_AVR_DIR_PIN_OUT(		E,5)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PE5>::modeIn(void)      {HAL_AVR_DIR_PIN_IN(		E,5)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PE5>::modeInPullup(void){HAL_AVR_DIR_PIN_IN_PULLUP(E,5)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PE5>::writeHigh(void)   {HAL_AVR_SET_PIN_HIGH(		E,5)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PE5>::writeLow(void)    {HAL_AVR_SET_PIN_LOW(		E,5)}
template<> bool GenericPin</*AVR_ATmega2560,*/ pins::PIN_PE5>::readState(void) const  {HAL_AVR_READ_PIN(	E,5)}

template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PB7>::modeOut(void)     {HAL_AVR_DIR_PIN_OUT( 		B,7)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PB7>::modeIn(void)      {HAL_AVR_DIR_PIN_IN(  		B,7)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PB7>::modeInPullup(void){HAL_AVR_DIR_PIN_IN_PULLUP(B,7)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PB7>::writeHigh(void)   {HAL_AVR_SET_PIN_HIGH(		B,7)}
template<> void GenericPin</*AVR_ATmega2560,*/ pins::PIN_PB7>::writeLow(void)    {HAL_AVR_SET_PIN_LOW( 		B,7)}
template<> bool GenericPin</*AVR_ATmega2560,*/ pins::PIN_PB7>::readState(void) const {HAL_AVR_READ_PIN(		B,7)}

//#endif

//#if defined( __AVR_ATmega328P__)
using atmega328pins= GenericCPU<AVR_ATmega328P>::cpu_pins;
template<> void GenericPin</*AVR_ATmega328P,*/ atmega328pins::PIN_PB0>::modeOut(void)     {HAL_AVR_DIR_PIN_OUT( B,0)}
template<> void GenericPin</*AVR_ATmega2560,*/ atmega328pins::PIN_PB0>::modeIn(void)      {HAL_AVR_DIR_PIN_IN(  B,0)}
template<> void GenericPin</*AVR_ATmega2560,*/ atmega328pins::PIN_PB0>::modeInPullup(void){HAL_AVR_DIR_PIN_IN_PULLUP(B,0)}
template<> void GenericPin</*AVR_ATmega328P,*/ atmega328pins::PIN_PB0>::writeHigh(void)   {HAL_AVR_SET_PIN_HIGH(B,0)}
template<> void GenericPin</*AVR_ATmega328P,*/ atmega328pins::PIN_PB0>::writeLow(void)    {HAL_AVR_SET_PIN_LOW( B,0)}
template<> bool GenericPin</*AVR_ATmega2560,*/ atmega328pins::PIN_PB0>::readState(void) const {HAL_AVR_READ_PIN(B,0)}
//#endif

}//namespace UHAL
#endif //AVR_PIN_H_