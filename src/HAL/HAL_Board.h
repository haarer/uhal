
#include "HAL_CPU.h"
namespace UHAL
{
    typedef enum {
    ArduinoUno,
    ArduinoMega2560}board_type;

    template< board_type board>class GenericBoard{};

    template<> class GenericBoard<ArduinoMega2560>
    {
        public:
            static const AVRCPU<AVR_ATmega2560> cpu;
    };
    template<> class GenericBoard<ArduinoUno> // FIXME: enable override of default cpu in template
    {
        public:
            static const AVRCPU<AVR_ATmega328> cpu;
    };
}

