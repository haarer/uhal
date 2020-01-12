#ifndef STM32_CPU_H_
#define STM32_CPU_H_

#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif


#include "../HAL_Pin.h"
namespace UHAL
{
    typedef enum {
        STM32F103C8T6,
        STM32F103C8T6_kack
        }stm_cpu_type;



    template<auto cpu,package_type pkg> struct cpu_pin_list;


    template<> struct cpu_pin_list<STM32F103C8T6,PKG_LQFP48> //FIXME: this depends on the package type, assumed tqfp 32
    {
        static GenericPin<stm32_pin_type::PIN_PC13> pc13;
    };

    
    template< auto cpu, package_type pkg> struct GenericCPU
    {
        public:
            static const long ClockMhz = F_CPU;
            //typedef typename cpu_pins<cpu, pkg>::pin_type cpu_pins; //FIXME: this depends on the package type
            static const cpu_pin_list<cpu, pkg> pins;
    };



}
#endif // avrcpzu