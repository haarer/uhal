
#ifndef HAL_CPU_H_
#define HAL_CPU_H_
namespace UHAL
{

    typedef enum {
        PKG_TQFP32,
        PKG_TQFP64,
        PKG_TQFP100,
        PKG_DIL28}package_type;

    template< auto cpu, package_type pkg>class GenericCPU;
}

#if defined(__AVR__)
#include "avr/avr_cpu.h"
#elif defined (__ESP32__)
#include "esp32/esp32_cpu.h"
#else
#error "unknown Platform"
#endif

#endif