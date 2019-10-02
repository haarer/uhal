
#include "HAL_CPU.h"
namespace UHAL
{


    template<auto cpu_pin> struct BoardPin
    {
        typedef decltype(cpu_pin) type;
    };
    
    typedef enum {
    ArduinoUno,
    ArduinoMega2560}board_type;

    template< board_type board>class GenericBoard{};

    template<> class GenericBoard<ArduinoMega2560>
    {
        public:

            static const GenericCPU<AVR_ATmega2560, PKG_TQFP100> cpu;

            // map cpu pins to board pins (name aliases )
            //from https://www.arduino.cc/en/Hacking/PinMapping2560
            static auto constexpr& pin4 = cpu.pins.pg5; // OC0B
            static auto constexpr& pin0 = cpu.pins.pe0; // RX0
            static auto constexpr& pin1 = cpu.pins.pe1; // TX0
            //PE2 NC
            static auto constexpr& pin5 = cpu.pins.pe3; // OC3A
            static auto constexpr& pin2 = cpu.pins.pe4; // OC3B
            static auto constexpr& pin3 = cpu.pins.pe5; // OC3C
            //PE6 NC
            //PE7 NC
            static auto constexpr& pin17 = cpu.pins.ph0; // OC3C
            static auto constexpr& pin16 = cpu.pins.ph1; // OC3C            
            //PH2 NC
            static auto constexpr& pin6 = cpu.pins.ph3; // OC4A
            static auto constexpr& pin7 = cpu.pins.ph4; // OC4B

            static auto constexpr& pin8 = cpu.pins.ph5; // OC4C
            static auto constexpr& pin9 = cpu.pins.ph6; // OC4C
            static auto constexpr& pin53 = cpu.pins.pb0; // SS
            static auto constexpr& pin52 = cpu.pins.pb1; // SCK
            static auto constexpr& pin51 = cpu.pins.pb2; // MOSI
            static auto constexpr& pin50 = cpu.pins.pb3; // MISO
            static auto constexpr& pin10 = cpu.pins.pb4; // OC2A
            static auto constexpr& pin11 = cpu.pins.pb5; // OC1A
            static auto constexpr& pin12 = cpu.pins.pb6; // OC1B
            static auto constexpr& pin13 = cpu.pins.pb7;
            //PH4 NC
            static auto constexpr& pin49 = cpu.pins.pl0; // 
            static auto constexpr& pin48 = cpu.pins.pl1; // 
            static auto constexpr& pin47 = cpu.pins.pl2; // 
            static auto constexpr& pin46 = cpu.pins.pl3; // OC5A
            static auto constexpr& pin45 = cpu.pins.pl4; // OC5B
            static auto constexpr& pin44 = cpu.pins.pl5; // OC5C
            static auto constexpr& pin43 = cpu.pins.pl6; // 
            static auto constexpr& pin42 = cpu.pins.pl7; //
            //PD4
            //PD5
            //PD6
            static auto constexpr& pin38 = cpu.pins.pd7; //
            static auto constexpr& pin41 = cpu.pins.pg0; //
            static auto constexpr& pin40 = cpu.pins.pg1; //
            static auto constexpr& pin37 = cpu.pins.pc0; //
            static auto constexpr& pin36 = cpu.pins.pc1; //
            static auto constexpr& pin35 = cpu.pins.pc2; //
            static auto constexpr& pin34 = cpu.pins.pc3; //
            static auto constexpr& pin33 = cpu.pins.pc4; //
            static auto constexpr& pin32 = cpu.pins.pc5; //
            static auto constexpr& pin31 = cpu.pins.pc6; //
            static auto constexpr& pin30 = cpu.pins.pc7; //

            static auto constexpr& pin15 = cpu.pins.pj0; //
            static auto constexpr& pin14 = cpu.pins.pj1; //

            static auto constexpr& pin39 = cpu.pins.pg2; //
            static auto constexpr& pin29 = cpu.pins.pa7; //
            static auto constexpr& pin28 = cpu.pins.pa6; //
            static auto constexpr& pin27 = cpu.pins.pa5; //
            static auto constexpr& pin26 = cpu.pins.pa4; //
            static auto constexpr& pin25 = cpu.pins.pa3; //
            static auto constexpr& pin24 = cpu.pins.pa2; //
            static auto constexpr& pin23 = cpu.pins.pa1; //
            static auto constexpr& pin22 = cpu.pins.pa0; //

            static auto constexpr& apin15 = cpu.pins.pk7; //
            static auto constexpr& apin14 = cpu.pins.pk6; //
            static auto constexpr& apin13 = cpu.pins.pk5; //
            static auto constexpr& apin12 = cpu.pins.pk4; //
            static auto constexpr& apin11 = cpu.pins.pk3; //
            static auto constexpr& apin10 = cpu.pins.pk2; //
            static auto constexpr& apin9 = cpu.pins.pk1; //
            static auto constexpr& apin8 = cpu.pins.pk0; //

            static auto constexpr& apin7 = cpu.pins.pf7; //
            static auto constexpr& apin6 = cpu.pins.pf6; //
            static auto constexpr& apin5 = cpu.pins.pf5; //
            static auto constexpr& apin4 = cpu.pins.pf4; //
            static auto constexpr& apin3 = cpu.pins.pf3; //
            static auto constexpr& apin2 = cpu.pins.pf2; //
            static auto constexpr& apin1 = cpu.pins.pf1; //
            static auto constexpr& apin0 = cpu.pins.pf0; //



    };
    template<> class GenericBoard<ArduinoUno> // FIXME: enable override of default cpu in template
    {
        public:
            static const GenericCPU<AVR_ATmega328P,PKG_DIL28> cpu;
            //https://www.arduino.cc/en/Hacking/PinMapping168
            using atmega328pins= GenericCPU<AVR_ATmega328P,PKG_DIL28>::cpu_pins;
            BoardPin<atmega328pins::PIN_PD0>::type pin0; // RX
            BoardPin<atmega328pins::PIN_PD1>::type pin1; // TX
            BoardPin<atmega328pins::PIN_PD2>::type pin2; // 
            BoardPin<atmega328pins::PIN_PD3>::type pin3; // OC2B
            BoardPin<atmega328pins::PIN_PD4>::type pin4; //

            BoardPin<atmega328pins::PIN_PD5>::type pin5; // OC0B
            BoardPin<atmega328pins::PIN_PD6>::type pin6; // OC0A
            BoardPin<atmega328pins::PIN_PD7>::type pin7; // 
            BoardPin<atmega328pins::PIN_PB0>::type pin8; // 
            BoardPin<atmega328pins::PIN_PB1>::type pin9; // OC1A
            BoardPin<atmega328pins::PIN_PB2>::type pin10; //OC1B SS 
            BoardPin<atmega328pins::PIN_PB3>::type pin11; //OC2A MOSI 
            BoardPin<atmega328pins::PIN_PB4>::type pin12; //MISO 
            BoardPin<atmega328pins::PIN_PB5>::type pin13; //SCK 

            BoardPin<atmega328pins::PIN_PC0>::type apin0; // 
            BoardPin<atmega328pins::PIN_PC1>::type apin1; // 
            BoardPin<atmega328pins::PIN_PC2>::type apin2; // 
            BoardPin<atmega328pins::PIN_PC3>::type apin3; // 
            BoardPin<atmega328pins::PIN_PC4>::type apin4; // SDA
            BoardPin<atmega328pins::PIN_PC5>::type apin5; // SCL

    };




}

