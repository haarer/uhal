
#ifndef HAL_CPU_H_
#define HAL_CPU_H_
namespace UHAL
{
    template< auto cpu>class GenericCPU;
}

#if defined(__AVR__)
#include "avr/avr_cpu.h"
#elif defined (__ESP32__)
#include "esp32/esp32_cpu.h"
#else
#error "unknown Platform"
#endif

#endif