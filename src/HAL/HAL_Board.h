
#include "HAL_CPU.h"
namespace UHAL
{


    template<auto cpu_pin_no> struct BoardPin
    {
        typedef GenericPin<AVR_ATmega2560,cpu_pin_no> type;
    };
    
    typedef enum {
    ArduinoUno,
    ArduinoMega2560}board_type;

    template< board_type board>class GenericBoard{};

    template<> class GenericBoard<ArduinoMega2560>
    {
        public:
            static const GenericCPU<AVR_ATmega2560> cpu;
            //from https://www.arduino.cc/en/Hacking/PinMapping2560
            BoardPin<GenericCPU<AVR_ATmega2560>::cpu_pins::PIN_PG5>::type pin4; // OC0B
            BoardPin<GenericCPU<AVR_ATmega2560>::cpu_pins::PIN_PE0>::type pin0; // RX0
            BoardPin<GenericCPU<AVR_ATmega2560>::cpu_pins::PIN_PE1>::type pin1; // TX0
            //PE2 NC
            BoardPin<GenericCPU<AVR_ATmega2560>::cpu_pins::PIN_PE3>::type pin5; // OC3A
            BoardPin<GenericCPU<AVR_ATmega2560>::cpu_pins::PIN_PE4>::type pin2; // OC3B
            BoardPin<GenericCPU<AVR_ATmega2560>::cpu_pins::PIN_PE5>::type pin3; // OC3C
            //PE6 NC
            //PE7 NC


    };
    template<> class GenericBoard<ArduinoUno> // FIXME: enable override of default cpu in template
    {
        public:
            static const GenericCPU<AVR_ATmega328> cpu;
    };




}

