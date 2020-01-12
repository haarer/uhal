#ifndef _HAL_DELAY_
#define _HAL_DELAY_

// tbd needs board selection
#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif

#ifdef __AVR__
#include <util/delay.h>
#else

void _delay_loop_2(uint16_t f) {
  for (uint16_t i = 0; i < f; ++i) __asm__("nop");
}

void _delay_loop_1(uint8_t f) {
  for (uint8_t i = 0; i < f; ++i) __asm__("nop");
}

//tbd - calibrate !
void _delay_ms(double __ms) {
  double __tmp;
#if __HAS_DELAY_CYCLES && defined(__OPTIMIZE__) && \
    !defined(__DELAY_BACKWARD_COMPATIBLE__) && __STDC_HOSTED__
  uint32_t __ticks_dc;

  __tmp = ((F_CPU) / 1e3) * __ms;

#if defined(__DELAY_ROUND_DOWN__)
  __ticks_dc = (uint32_t)fabs(__tmp);

#elif defined(__DELAY_ROUND_CLOSEST__)
  __ticks_dc = (uint32_t)(fabs(__tmp) + 0.5);

#else
  // round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));
#endif

  __builtin_avr_delay_cycles(__ticks_dc);

#else
  uint16_t __ticks;
  __tmp = ((F_CPU) / 4e3) * __ms;
  if (__tmp < 1.0)
    __ticks = 1;
  else if (__tmp > 65535) {
    //	__ticks = requested delay in 1/10 ms
    __ticks = (uint16_t)(__ms * 10.0);
    while (__ticks) {
      // wait 1/10 ms
      _delay_loop_2(((F_CPU) / 10e4) / 10);
      __ticks--;
    }
    return;
  } else
    __ticks = (uint16_t)__tmp;
  _delay_loop_2(__ticks);
#endif
}

//tbd - calibrate !
void _delay_us(double __us) {
  double __tmp;
#if __HAS_DELAY_CYCLES && defined(__OPTIMIZE__) && \
    !defined(__DELAY_BACKWARD_COMPATIBLE__) && __STDC_HOSTED__
  uint32_t __ticks_dc;
  extern void __builtin_avr_delay_cycles(unsigned long);
  __tmp = ((F_CPU) / 1e6) * __us;

#if defined(__DELAY_ROUND_DOWN__)
  __ticks_dc = (uint32_t)fabs(__tmp);

#elif defined(__DELAY_ROUND_CLOSEST__)
  __ticks_dc = (uint32_t)(fabs(__tmp) + 0.5);

#else
  // round up by default
  __ticks_dc = (uint32_t)(ceil(fabs(__tmp)));
#endif

  __builtin_avr_delay_cycles(__ticks_dc);

#else
  uint8_t __ticks;
  double __tmp2;
  __tmp = ((F_CPU) / 3e6) * __us;
  __tmp2 = ((F_CPU) / 4e6) * __us;
  if (__tmp < 1.0)
    __ticks = 1;
  else if (__tmp2 > 65535) {
    _delay_ms(__us / 1000.0);
  } else if (__tmp > 255) {
    uint16_t __ticks = (uint16_t)__tmp2;
    _delay_loop_2(__ticks);
    return;
  } else
    __ticks = (uint8_t)__tmp;
  _delay_loop_1(__ticks);
#endif
}

#endif
namespace UHAL {
static inline void delay(double d) { _delay_ms(d); }

static inline void delayMicroseconds(double us) { _delay_us(us); }
}  // namespace UHAL

#endif