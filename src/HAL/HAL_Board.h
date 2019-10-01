
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

            BoardPin<GenericCPU<AVR_ATmega2560>::cpu_pins::PIN_PE5>::type pin3;
    };
    template<> class GenericBoard<ArduinoUno> // FIXME: enable override of default cpu in template
    {
        public:
            static const GenericCPU<AVR_ATmega328> cpu;
    };




}

