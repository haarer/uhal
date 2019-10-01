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
    AVR_ATmega1281,
    AVR_ATmega2560,
    AVR_ATmega2561}avr_cpu_type;

    template<auto cpu> struct pins;

    template<> struct pins<AVR_ATmega1281> //FIXME: this depends on the package type, assumed tqfp 64
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

    template<> struct pins<AVR_ATmega2561> //FIXME: this depends on the package type, assumed tqfp 64
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

    template<> struct pins<AVR_ATmega2560> //FIXME: this depends on the package type, assumed tqfp 100
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
    template<> struct pins<AVR_ATmega328P> //FIXME: this depends on the package type, assumed tqfp 32
    {
                typedef  enum {
                    PIN_PC0=23, PIN_PC1=24, PIN_PC2=25, PIN_PC3=26, PIN_PC4=27, PIN_PC5=28, PIN_PC6=29,
                    PIN_PD0=30, PIN_PD1=31, PIN_PD2=32, PIN_PD3=1,  PIN_PD4=2,
                    PIN_PB0=12, PIN_PB1=13, PIN_PB2=14, PIN_PB3=15, PIN_PB4=16, PIN_PB5=17, PIN_PB6=7,  PIN_PB7=8,
                }pin_type;
    };

    template< avr_cpu_type cpu> class GenericCPU< cpu>
    {
        public:
            static const long ClockMhz = F_CPU;
                typedef typename pins<cpu>::pin_type cpu_pins; //FIXME: this depends on the package type

    };

}
#endif // avrcpzu