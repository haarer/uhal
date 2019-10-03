#ifndef AVR_CPU_H_
#define AVR_CPU_H_

#ifndef F_CPU
#error "CPU Frequency left undefined. Set F_CPU"
#endif

#include <util/delay.h>

#include "../HAL_Pin.h"
namespace UHAL
{
    typedef enum {
        AVR_ATmega168,
        AVR_ATmega328,
        AVR_ATmega328P,
        AVR_ATmega1280,
        AVR_ATmega1281,
        AVR_ATmega2560,
        AVR_ATmega2561}avr_cpu_type;


    //template<auto cpu,package_type pkg> struct cpu_pins;

    template<auto cpu,package_type pkg> struct cpu_pin_list;
/*
    template<> struct cpu_pins<AVR_ATmega1281,PKG_TQFP64> //FIXME: this depends on the package type, assumed tqfp 64
    {
        typedef  enum {
                    PIN_PE0=2,  PIN_PE1=3,  PIN_PE2=4,  PIN_PE3=5,  PIN_PE4=6,  PIN_PE5=7,  PIN_PE6=8,  PIN_PE7=9,
                    PIN_PB0=10, PIN_PB1=11, PIN_PB2=12, PIN_PB3=13, PIN_PB4=14, PIN_PB5=15, PIN_PB6=16, PIN_PB7=17,
                    PIN_PG0=33, PIN_PG1=34, PIN_PG2=43, PIN_PG3=18, PIN_PG4=19, PIN_PG5=1,
                    PIN_PD0=25, PIN_PD1=26, PIN_PD2=27, PIN_PD3=28, PIN_PD4=29, PIN_PD5=30, PIN_PD6=31, PIN_PD7=32,
                    PIN_PC0=35, PIN_PC1=36, PIN_PC2=37, PIN_PC3=38, PIN_PC4=39, PIN_PC5=40, PIN_PC6=41, PIN_PC7=42,
                    PIN_PA0=51, PIN_PA1=50, PIN_PA2=49, PIN_PA3=48, PIN_PA4=47, PIN_PA5=46, PIN_PA6=45, PIN_PA7=44,
                    PIN_PF0=61, PIN_PF1=60, PIN_PF2=59, PIN_PF3=58, PIN_PF4=57, PIN_PF5=56, PIN_PF6=55, PIN_PF7=54
                }pin_type;
    };

    template<> struct cpu_pins<AVR_ATmega2561,PKG_TQFP64> //FIXME: this depends on the package type, assumed tqfp 64
    {
        typedef  enum {
                    PIN_PE0=2,  PIN_PE1=3,  PIN_PE2=4,  PIN_PE3=5,  PIN_PE4=6,  PIN_PE5=7,  PIN_PE6=8,  PIN_PE7=9,
                    PIN_PB0=10, PIN_PB1=11, PIN_PB2=12, PIN_PB3=13, PIN_PB4=14, PIN_PB5=15, PIN_PB6=16, PIN_PB7=17,
                    PIN_PG0=33, PIN_PG1=34, PIN_PG2=43, PIN_PG3=18, PIN_PG4=19, PIN_PG5=1,
                    PIN_PD0=25, PIN_PD1=26, PIN_PD2=27, PIN_PD3=28, PIN_PD4=29, PIN_PD5=30, PIN_PD6=31, PIN_PD7=32,
                    PIN_PC0=35, PIN_PC1=36, PIN_PC2=37, PIN_PC3=38, PIN_PC4=39, PIN_PC5=40, PIN_PC6=41, PIN_PC7=42,
                    PIN_PA0=51, PIN_PA1=50, PIN_PA2=49, PIN_PA3=48, PIN_PA4=47, PIN_PA5=46, PIN_PA6=45, PIN_PA7=44,
                    PIN_PF0=61, PIN_PF1=60, PIN_PF2=59, PIN_PF3=58, PIN_PF4=57, PIN_PF5=56, PIN_PF6=55, PIN_PF7=54
                }pin_type;
    };

    template<> struct cpu_pins<AVR_ATmega2560,PKG_TQFP100> //FIXME: this depends on the package type, assumed tqfp 100
    {
        typedef  enum {
                    PIN_PA0=78, PIN_PA1=77, PIN_PA2=76, PIN_PA3=75, PIN_PA4=74, PIN_PA5=73, PIN_PA6=72, PIN_PA7=71,                    
                    PIN_PB0=19, PIN_PB1=20, PIN_PB2=21, PIN_PB3=22, PIN_PB4=23, PIN_PB5=24, PIN_PB6=25, PIN_PB7=26,
                    PIN_PC0=53, PIN_PC1=54, PIN_PC2=55, PIN_PC3=56, PIN_PC4=57, PIN_PC5=58, PIN_PC6=59, PIN_PC7=60,
                    PIN_PD0=43, PIN_PD1=44, PIN_PD2=45, PIN_PD3=46, PIN_PD4=47, PIN_PD5=48, PIN_PD6=49, PIN_PD7=50,
                    PIN_PE0=2,  PIN_PE1=3,  PIN_PE2=4,  PIN_PE3=5,  PIN_PE4=6,  PIN_PE5=7,  PIN_PE6=8,  PIN_PE7=9,
                    PIN_PF0=97, PIN_PF1=96, PIN_PF2=95, PIN_PF3=94, PIN_PF4=93, PIN_PF5=92, PIN_PF6=91, PIN_PF7=90,
                    PIN_PG0=51, PIN_PG1=52, PIN_PG2=70, PIN_PG3=28, PIN_PG4=29, PIN_PG5=1,
                    PIN_PH0=12, PIN_PH1=13, PIN_PH2=14, PIN_PH3=15, PIN_PH4=16, PIN_PH5=17, PIN_PH6=18, PIN_PH7=27,
                    PIN_PJ0=63, PIN_PJ1=64, PIN_PJ2=65, PIN_PJ3=66, PIN_PJ4=67, PIN_PJ5=68, PIN_PJ6=69, PIN_PJ7=79,
                    PIN_PK0=89, PIN_PK1=88, PIN_PK2=87, PIN_PK3=86, PIN_PK4=85, PIN_PK5=84, PIN_PK6=83, PIN_PK7=82,
                    PIN_PL0=35, PIN_PL1=36, PIN_PL2=37, PIN_PL3=38, PIN_PL4=39, PIN_PL5=40, PIN_PL6=41, PIN_PL7=42,
                }pin_type;
    };    
    template<> struct cpu_pins<AVR_ATmega328P,PKG_TQFP32> //FIXME: this depends on the package type, assumed tqfp 32
    {
                typedef  enum {
                    PIN_PC0=23, PIN_PC1=24, PIN_PC2=25, PIN_PC3=26, PIN_PC4=27, PIN_PC5=28, PIN_PC6=29,
                    PIN_PD0=30, PIN_PD1=31, PIN_PD2=32, PIN_PD3=1,  PIN_PD4=2,
                    PIN_PB0=12, PIN_PB1=13, PIN_PB2=14, PIN_PB3=15, PIN_PB4=16, PIN_PB5=17, PIN_PB6=7,  PIN_PB7=8,
                }pin_type;
    };

    template<> struct cpu_pins<AVR_ATmega328P,PKG_DIL28> //FIXME: this depends on the package type, assumed tqfp 32
    {
                typedef  enum {
                    PIN_PB0=14, PIN_PB1=15, PIN_PB2=16, PIN_PB3=17, PIN_PB4=18, PIN_PB5=19, PIN_PB6=9, PIN_PB7=10,
                    PIN_PC0=23, PIN_PC1=24, PIN_PC2=25, PIN_PC3=26, PIN_PC4=27, PIN_PC5=28, PIN_PC6=1,
                    PIN_PD0=2,  PIN_PD1=3,  PIN_PD2=4,  PIN_PD3=5,  PIN_PD4=6,  PIN_PD5=11, PIN_PD6=12, PIN_PD7=13,
                }pin_type;
    };
*/
    template<> struct cpu_pin_list<AVR_ATmega328P,PKG_DIL28> //FIXME: this depends on the package type, assumed tqfp 32
    {
        static GenericPin<avr_pin_type::PIN_PB7> pb7;
        static GenericPin<avr_pin_type::PIN_PC5> pc5;
    };




    template<> struct cpu_pin_list<AVR_ATmega2560,PKG_TQFP100> 
    {
static GenericPin<avr_pin_type::PIN_PA0> pa0;
static GenericPin<avr_pin_type::PIN_PA1> pa1;
static GenericPin<avr_pin_type::PIN_PA2> pa2;
static GenericPin<avr_pin_type::PIN_PA3> pa3;
static GenericPin<avr_pin_type::PIN_PA4> pa4;
static GenericPin<avr_pin_type::PIN_PA5> pa5;
static GenericPin<avr_pin_type::PIN_PA6> pa6;
static GenericPin<avr_pin_type::PIN_PA7> pa7;
static GenericPin<avr_pin_type::PIN_PB0> pb0;
static GenericPin<avr_pin_type::PIN_PB1> pb1;
static GenericPin<avr_pin_type::PIN_PB2> pb2;
static GenericPin<avr_pin_type::PIN_PB3> pb3;
static GenericPin<avr_pin_type::PIN_PB4> pb4;
static GenericPin<avr_pin_type::PIN_PB5> pb5;
static GenericPin<avr_pin_type::PIN_PB6> pb6;
static GenericPin<avr_pin_type::PIN_PB7> pb7;
static GenericPin<avr_pin_type::PIN_PC0> pc0;
static GenericPin<avr_pin_type::PIN_PC1> pc1;
static GenericPin<avr_pin_type::PIN_PC2> pc2;
static GenericPin<avr_pin_type::PIN_PC3> pc3;
static GenericPin<avr_pin_type::PIN_PC4> pc4;
static GenericPin<avr_pin_type::PIN_PC5> pc5;
static GenericPin<avr_pin_type::PIN_PC6> pc6;
static GenericPin<avr_pin_type::PIN_PC7> pc7;
static GenericPin<avr_pin_type::PIN_PD0> pd0;
static GenericPin<avr_pin_type::PIN_PD1> pd1;
static GenericPin<avr_pin_type::PIN_PD2> pd2;
static GenericPin<avr_pin_type::PIN_PD3> pd3;
static GenericPin<avr_pin_type::PIN_PD4> pd4;
static GenericPin<avr_pin_type::PIN_PD5> pd5;
static GenericPin<avr_pin_type::PIN_PD6> pd6;
static GenericPin<avr_pin_type::PIN_PD7> pd7;
static GenericPin<avr_pin_type::PIN_PE0> pe0;
static GenericPin<avr_pin_type::PIN_PE1> pe1;
static GenericPin<avr_pin_type::PIN_PE2> pe2;
static GenericPin<avr_pin_type::PIN_PE3> pe3;
static GenericPin<avr_pin_type::PIN_PE4> pe4;
static GenericPin<avr_pin_type::PIN_PE5> pe5;
static GenericPin<avr_pin_type::PIN_PE6> pe6;
static GenericPin<avr_pin_type::PIN_PE7> pe7;
static GenericPin<avr_pin_type::PIN_PF0> pf0;
static GenericPin<avr_pin_type::PIN_PF1> pf1;
static GenericPin<avr_pin_type::PIN_PF2> pf2;
static GenericPin<avr_pin_type::PIN_PF3> pf3;
static GenericPin<avr_pin_type::PIN_PF4> pf4;
static GenericPin<avr_pin_type::PIN_PF5> pf5;
static GenericPin<avr_pin_type::PIN_PF6> pf6;
static GenericPin<avr_pin_type::PIN_PF7> pf7;
static GenericPin<avr_pin_type::PIN_PG0> pg0;
static GenericPin<avr_pin_type::PIN_PG1> pg1;
static GenericPin<avr_pin_type::PIN_PG2> pg2;
static GenericPin<avr_pin_type::PIN_PG3> pg3;
static GenericPin<avr_pin_type::PIN_PG4> pg4;
static GenericPin<avr_pin_type::PIN_PG5> pg5;

static GenericPin<avr_pin_type::PIN_PH0> ph0;
static GenericPin<avr_pin_type::PIN_PH1> ph1;
static GenericPin<avr_pin_type::PIN_PH2> ph2;
static GenericPin<avr_pin_type::PIN_PH3> ph3;
static GenericPin<avr_pin_type::PIN_PH4> ph4;
static GenericPin<avr_pin_type::PIN_PH5> ph5;
static GenericPin<avr_pin_type::PIN_PH6> ph6;
static GenericPin<avr_pin_type::PIN_PH7> ph7;
static GenericPin<avr_pin_type::PIN_PJ0> pj0;
static GenericPin<avr_pin_type::PIN_PJ1> pj1;
static GenericPin<avr_pin_type::PIN_PJ2> pj2;
static GenericPin<avr_pin_type::PIN_PJ3> pj3;
static GenericPin<avr_pin_type::PIN_PJ4> pj4;
static GenericPin<avr_pin_type::PIN_PJ5> pj5;
static GenericPin<avr_pin_type::PIN_PJ6> pj6;
static GenericPin<avr_pin_type::PIN_PJ7> pj7;
static GenericPin<avr_pin_type::PIN_PK0> pk0;
static GenericPin<avr_pin_type::PIN_PK1> pk1;
static GenericPin<avr_pin_type::PIN_PK2> pk2;
static GenericPin<avr_pin_type::PIN_PK3> pk3;
static GenericPin<avr_pin_type::PIN_PK4> pk4;
static GenericPin<avr_pin_type::PIN_PK5> pk5;
static GenericPin<avr_pin_type::PIN_PK6> pk6;
static GenericPin<avr_pin_type::PIN_PK7> pk7;
static GenericPin<avr_pin_type::PIN_PL0> pl0;
static GenericPin<avr_pin_type::PIN_PL1> pl1;
static GenericPin<avr_pin_type::PIN_PL2> pl2;
static GenericPin<avr_pin_type::PIN_PL3> pl3;
static GenericPin<avr_pin_type::PIN_PL4> pl4;
static GenericPin<avr_pin_type::PIN_PL5> pl5;
static GenericPin<avr_pin_type::PIN_PL6> pl6;
static GenericPin<avr_pin_type::PIN_PL7> pl7;
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