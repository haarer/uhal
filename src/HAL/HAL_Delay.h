#ifndef _HAL_DELAY_
#define _HAL_DELAY_

//tbd needs board selection
#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif

#include <util/delay.h>
namespace UHAL
{
    static inline void delay(double d){	_delay_ms(d);}

    static inline void delayMicroseconds(double us) { _delay_us(us);}
}

#endif