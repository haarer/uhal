//tbd needs board selection
#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif

#include <util/delay.h>

#define delay(d)	_delay_ms(d);

#define delayMicroseconds( us) _delay_us(us)
