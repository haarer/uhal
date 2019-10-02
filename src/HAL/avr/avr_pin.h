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

#include "avr_pinfuncs.h"


}//namespace UHAL
#endif //AVR_PIN_H_