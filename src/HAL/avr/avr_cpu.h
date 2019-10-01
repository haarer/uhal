#ifndef AVR_CPU_H_
#define AVR_CPU_H_

#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif

#include <util/delay.h>
namespace UHAL
{
    typedef enum {
    AVR_ATmega168,
    AVR_ATmega328,
    AVR_ATmega328P,
    AVR_ATmega1280,
    AVR_ATmega2560}avr_cpu_type;

    template< avr_cpu_type cpu> class GenericCPU< cpu>
    {
#if defined( __AVR_ATmega168__)
            static_assert(cpu == AVR_ATmega168, "CPU does not match compiler settings");
#endif

#if defined( __AVR_ATmega328__)
            static_assert(cpu == AVR_ATmega328, "CPU does not match compiler settings");
#endif

#if defined( __AVR_ATmega328P__)
            static_assert(cpu == AVR_ATmega328P, "CPU does not match compiler settings");
            public:
                static const long ClockMhz = F_CPU;
                typedef  enum {
                    PIN_PB0=12, PIN_PB1=13, PIN_PB2=14, PIN_PB3=15, PIN_PB4=16, PIN_PB5=17, PIN_PB6=7,  PIN_PB7=8,
                    PIN_PC0=23, PIN_PC1=24, PIN_PC2=25, PIN_PC3=26, PIN_PC4=27, PIN_PC5=28, PIN_PC6=29,
                    PIN_PD0=30, PIN_PD1=31, PIN_PD2=32, PIN_PD3=1,  PIN_PD4=2
                }cpu_pins;
#endif

#if defined( __AVR_ATmega1280__)
            static_assert(cpu == AVR_ATmega1280, "CPU does not match compiler settings");
#endif
#if defined( __AVR_ATmega2560__)
            static_assert(cpu == AVR_ATmega2560, "CPU does not match compiler settings"); 
            public:
                static const long ClockMhz = F_CPU;
                typedef  enum {
                    PIN_PE0=2, PIN_PE1=3, PIN_PE2=4, PIN_PE3=5, PIN_PE4=6, PIN_PE5=7, PIN_PE6=8, PIN_PE7=9,
                    PIN_PG5=1
                }cpu_pins;
#endif
    };

}
#endif // avrcpzu