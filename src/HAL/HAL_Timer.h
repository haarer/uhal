/*
 * HAL_Timer.h
 *
 *  Created on: 24.01.2018
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
 */

#ifndef HAL_HAL_TIMER_H_
#define HAL_HAL_TIMER_H_



#if defined(__AVR__)

// ---------------------------------- AVR specific ------------------------------------------
#include <avr/io.h>

// ---------------------------------------------- Clock and timing ---------------------------

uint32_t HALSysClkMS(void) {
return 0;
}

#ifdef __AVR__
void HALSleepMS(uint32_t ms) {
while (ms--)
	_delay_ms(1);
}

#else
#error "HAL HALSleepMS not defined for this architecture"
#endif




#elif defined(STM32F1)
#warning "NO Timer support for this architecture"
#else
#error "HAL not defined for this architecture"
#endif



#endif /* HAL_HAL_TIMER_H_ */
