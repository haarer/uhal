#ifndef AVR_PIN_H_
#define AVR_PIN_H_

#include "avr_cpu.h"


// ---------------------------------- AVR specific ------------------------------------------
#include <avr/io.h>
#include <avr/interrupt.h>


namespace UHAL
{

	typedef  enum {
		PIN_PA0, PIN_PA1, PIN_PA2, PIN_PA3, PIN_PA4, PIN_PA5, PIN_PA6, PIN_PA7,                    
		PIN_PB0, PIN_PB1, PIN_PB2, PIN_PB3, PIN_PB4, PIN_PB5, PIN_PB6, PIN_PB7,
		PIN_PC0, PIN_PC1, PIN_PC2, PIN_PC3, PIN_PC4, PIN_PC5, PIN_PC6, PIN_PC7,
		PIN_PD0, PIN_PD1, PIN_PD2, PIN_PD3, PIN_PD4, PIN_PD5, PIN_PD6, PIN_PD7,
		PIN_PE0, PIN_PE1, PIN_PE2, PIN_PE3, PIN_PE4, PIN_PE5, PIN_PE6, PIN_PE7,
		PIN_PF0, PIN_PF1, PIN_PF2, PIN_PF3, PIN_PF4, PIN_PF5, PIN_PF6, PIN_PF7,
		PIN_PG0, PIN_PG1, PIN_PG2, PIN_PG3, PIN_PG4, PIN_PG5, PIN_PG6, PIN_PG7,
		PIN_PH0, PIN_PH1, PIN_PH2, PIN_PH3, PIN_PH4, PIN_PH5, PIN_PH6, PIN_PH7,
		PIN_PJ0, PIN_PJ1, PIN_PJ2, PIN_PJ3, PIN_PJ4, PIN_PJ5, PIN_PJ6, PIN_PJ7,
		PIN_PK0, PIN_PK1, PIN_PK2, PIN_PK3, PIN_PK4, PIN_PK5, PIN_PK6, PIN_PK7,
		PIN_PL0, PIN_PL1, PIN_PL2, PIN_PL3, PIN_PL4, PIN_PL5, PIN_PL6, PIN_PL7
	}avr_pin_type;

#ifndef DDRA
// tiny io headers
#define HAL_AVR_DIR_PIN_OUT(reg, bit_no) \
		PORT##reg.DIR = (1 << bit_no);        
#define HAL_AVR_DIR_PIN_IN(reg, bit_no) \
		PORT##reg.DIR = ~(1 << bit_no);              
#define HAL_AVR_DIR_PIN_IN_PULLUP(reg, bit_no) \
		PORT##reg.DIR = ~(1 << bit_no);                     \
		PORT##reg.OUT = (1 << bit_no);                     
#define HAL_AVR_SET_PIN_HIGH(reg, bit_no) \
		PORT##reg.OUT = (1 << bit_no);                
#define HAL_AVR_SET_PIN_LOW(reg, bit_no) \
		PORT##reg.OUT = ~(1 << bit_no);              
#define HAL_AVR_READ_PIN(reg, bit_no)                \
		return ((PORT##reg.IN & (1 << bit_no)) == (1 << bit_no)); 
#else

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
#endif
#include "avr_pinfuncs.h"

//------------------------- specialisations for PWM Pins -----------------------------------


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



// should be a combination of PWM Channel and pin ? Assignment of channels to p x y is cpu specific
#if defined(__AVR_ATmega8__) ||   \
	defined(__AVR_ATmega48__) ||  \
	defined(__AVR_ATmega88__) ||  \
	defined(__AVR_ATmega168__) || \
	defined(__AVR_ATmega328P__)


#warning "PWM will not work , ocr register raussuchen !"
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PE5>::initPWM(void)
{
	// arduino mega: PE5 ( OC3C/INT5 )	Digital pin 3 (PWM)
	TCCR3A |= _BV(COM3C1) | _BV(WGM30); // fast PWM, turn on oc3c
	TCCR3B = _BV(CS01) | _BV(WGM32);	//8khz
	OCR3C = 0;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PE5>::setPWM(uint8_t s)
{
	// on arduino mega: PE5 ( OC3C/INT5 )	Digital pin 3 (PWM)
	OCR3C = s;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PE5>::stopPWM(void)
{
	TCCR3A &=  ~ _BV(COM3C1);//turn off oc3c
}

template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PE3>::initPWM(void)
{
	// on arduino mega: PE3 ( OC3A/AIN1 )	Digital pin 5 (PWM)
	TCCR3A |= _BV(COM3A1) | _BV(WGM10); // fast PWM, turn on oc3a
	TCCR3B = _BV(CS01) | _BV(WGM12);	//8khz
	OCR3A = 0;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PE3>::setPWM(uint8_t s)
{
	OCR3A = s;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PE3>::stopPWM(void)
{
	TCCR3A &=  ~ _BV(COM3A1);
}

template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PH3>::initPWM(void)
{
	//arduino mega: PH3 ( OC4A )	Digital pin 6 (PWM)
	TCCR4A |= _BV(COM4A1) | _BV(WGM40); // fast PWM, turn on oc4a
	TCCR4B = _BV(CS41) | _BV(WGM42);	//8khz
	OCR4A = 0;
	
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PH3>::setPWM(uint8_t s)
{
	OCR4A = s;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PH3>::stopPWM(void)
{
	TCCR4A &=  ~ _BV(COM4A1);
}

template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PB4>::initPWM(void)
{
	// arduino mega: pin 10 is now PB4 (OC2A)
	TCCR2A |= _BV(COM2A1) | _BV(WGM21| _BV(WGM20)); // fast PWM, turn on oc2a
	TCCR2B = _BV(CS21) ;	//8khz
	//TCCR4B = 1 | _BV(WGM12);
	OCR2A = 0;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PB4>::setPWM(uint8_t s)
{
	OCR2A = s;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PB4>::stopPWM(void)
{
	TCCR2A &=  ~ _BV(COM2A1);
}

template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PB5>::initPWM(void)
{
	// arduino mega: PB5 ( OC1A/PCINT5 )	Digital pin 11 (PWM)
	TCCR1A |= _BV(COM1A1) | _BV(WGM10); // fast PWM, turn on oc1a
	TCCR1B = _BV(CS01) | _BV(WGM12);	//8khz
	//TCCR4B = 1 | _BV(WGM12);
	OCR1A = 0;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PB5>::setPWM(uint8_t s)
{
		OCR1A = s;
}
template<> void ::UHAL::GenericPWMPin< avr_pin_type::PIN_PB5>::stopPWM(void)
{
	TCCR1A &=  ~ _BV(COM1A1);
}

#elif defined(__AVR_ATtiny1614__) 

#else
#error "This chip is not supported!"
#endif



}//namespace UHAL
#endif //AVR_PIN_H_