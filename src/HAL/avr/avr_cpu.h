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
        #endif

        #if defined( __AVR_ATmega1280__)
            static_assert(cpu == AVR_ATmega1280, "CPU does not match compiler settings");
        #endif
        
        #if defined( __AVR_ATmega2560__)
            static_assert(cpu == AVR_ATmega2560, "CPU does not match compiler settings"); 
            public:
                static const long ClockMhz = F_CPU;
                typedef  enum {
                    PIN_PE0=2, PIN_PE1=3, PIN_PE2=4, PIN_PE3=5, PIN_PE4=6, PIN_PE5=7, PIN_PE6=8, PIN_PE7=9
                }cpu_pins;
    #endif
    };


}
#endif // avrcpzu