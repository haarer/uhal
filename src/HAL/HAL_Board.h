
#include "HAL_CPU.h"
namespace UHAL
{


    template<auto cpu_pin_no> struct BoardPin
    {
        typedef GenericPin</*AVR_ATmega2560,*/cpu_pin_no> type;
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
            using pins= GenericCPU<AVR_ATmega2560>::cpu_pins;
            BoardPin<pins::PIN_PG5>::type pin4; // OC0B
            BoardPin<pins::PIN_PE0>::type pin0; // RX0
            BoardPin<pins::PIN_PE1>::type pin1; // TX0
            //PE2 NC
            BoardPin<pins::PIN_PE3>::type pin5; // OC3A
            BoardPin<pins::PIN_PE4>::type pin2; // OC3B
            BoardPin<pins::PIN_PE5>::type pin3; // OC3C
            //PE6 NC
            //PE7 NC
            BoardPin<pins::PIN_PH0>::type pin17; // OC3C
            BoardPin<pins::PIN_PH1>::type pin16; // OC3C            
            //PH2 NC
            BoardPin<pins::PIN_PH3>::type pin6; // OC4A
            BoardPin<pins::PIN_PH4>::type pin7; // OC4B
            BoardPin<pins::PIN_PH5>::type pin8; // OC4C
            BoardPin<pins::PIN_PH6>::type pin9; // OC4C
            BoardPin<pins::PIN_PB0>::type pin53; // SS
            BoardPin<pins::PIN_PB1>::type pin52; // SCK
            BoardPin<pins::PIN_PB2>::type pin51; // MOSI
            BoardPin<pins::PIN_PB3>::type pin50; // MISO
            BoardPin<pins::PIN_PB4>::type pin10; // OC2A
            BoardPin<pins::PIN_PB5>::type pin11; // OC1A
            BoardPin<pins::PIN_PB6>::type pin12; // OC1B
            BoardPin<pins::PIN_PB7>::type pin13; // OC0A
            //PH4 NC
            BoardPin<pins::PIN_PL0>::type pin49; // 
            BoardPin<pins::PIN_PL1>::type pin48; // 
            BoardPin<pins::PIN_PL2>::type pin47; // 
            BoardPin<pins::PIN_PL3>::type pin46; // OC5A
            BoardPin<pins::PIN_PL4>::type pin45; // OC5B
            BoardPin<pins::PIN_PL5>::type pin44; // OC5C
            BoardPin<pins::PIN_PL6>::type pin43; // 
            BoardPin<pins::PIN_PL7>::type pin42; //
            //PD4
            //PD5
            //PD6
            BoardPin<pins::PIN_PD7>::type pin38; //
            BoardPin<pins::PIN_PG0>::type pin41; //
            BoardPin<pins::PIN_PG1>::type pin40; //
            BoardPin<pins::PIN_PC0>::type pin37; //
            BoardPin<pins::PIN_PC1>::type pin36; //
            BoardPin<pins::PIN_PC2>::type pin35; //
            BoardPin<pins::PIN_PC3>::type pin34; //
            BoardPin<pins::PIN_PC4>::type pin33; //
            BoardPin<pins::PIN_PC5>::type pin32; //
            BoardPin<pins::PIN_PC6>::type pin31; //
            BoardPin<pins::PIN_PC7>::type pin30; //

            BoardPin<pins::PIN_PJ0>::type pin15; //
            BoardPin<pins::PIN_PJ1>::type pin14; //

            BoardPin<pins::PIN_PG2>::type pin39; //
            BoardPin<pins::PIN_PA7>::type pin29; //
            BoardPin<pins::PIN_PA6>::type pin28; //
            BoardPin<pins::PIN_PA5>::type pin27; //
            BoardPin<pins::PIN_PA4>::type pin26; //
            BoardPin<pins::PIN_PA3>::type pin25; //
            BoardPin<pins::PIN_PA2>::type pin24; //
            BoardPin<pins::PIN_PA1>::type pin23; //
            BoardPin<pins::PIN_PA0>::type pin22; //

            BoardPin<pins::PIN_PK7>::type apin15; //
            BoardPin<pins::PIN_PK6>::type apin14; //
            BoardPin<pins::PIN_PK5>::type apin13; //
            BoardPin<pins::PIN_PK4>::type apin12; //
            BoardPin<pins::PIN_PK3>::type apin11; //
            BoardPin<pins::PIN_PK2>::type apin10; //
            BoardPin<pins::PIN_PK1>::type apin9; //
            BoardPin<pins::PIN_PK0>::type apin8; //

            BoardPin<pins::PIN_PF7>::type apin7; //
            BoardPin<pins::PIN_PF6>::type apin6; //
            BoardPin<pins::PIN_PF5>::type apin5; //
            BoardPin<pins::PIN_PF4>::type apin4; //
            BoardPin<pins::PIN_PF3>::type apin3; //
            BoardPin<pins::PIN_PF2>::type apin2; //
            BoardPin<pins::PIN_PF1>::type apin1; //
            BoardPin<pins::PIN_PF0>::type apin0; //



    };
    template<> class GenericBoard<ArduinoUno> // FIXME: enable override of default cpu in template
    {
        public:
            static const GenericCPU<AVR_ATmega328> cpu;
    };




}

