# uhal
micro hardware abstraction layer in c++
currently implemented for some avr cpus

**subdirectories**

util:
 * library code used by code below, with no hardware dependencies, such as crc, also some hardware agnostic utilities as job control
 
HAL:  
 * the hardware abstraction. IO Pins, UARTs, Timers
 * uses hardware specific includes, controlled by target platform defines

  ```C
  __AVR__
  __AVR_ATmega168__
  __AVR_ATmega168P__
  __AVR_ATmega328__
  __AVR_ATmega328P__
  __AVR_ATmega2560__
  ```
* sample useage of HAL (excerpt from the onewire bus template code, using the IOPin template of HAL )
```C++
template<uint8_t PinNumber>
class OneWire: public HALPin<PinNumber> {
public:
	OneWire(void) {
		static_cast<HALPin<PinNumber>*>(this)->modeIn();
	}

//...

}    
```



dev:
 * abstractions for hardware connected to pins, such as shift registers, Ada Fruit Motor Shields, Dallas Semi Sensors, DC Motors
 * uses HAL, util
 * sample code using the DC Motor and PWM Pins from HAL (excerpt from the AdaFruit Motor shield code)

```C++
#include <avr/io.h>
#include <stdio.h>

#include "HAL/HAL.h"


const uint8_t MOTORLATCH=12;
const uint8_t MOTORCLK=4;
const uint8_t MOTORENABLE=7;
const uint8_t MOTORDATA=8;

// Bit positions in the 74HCT595 shift register output
#define MOTOR1_A 2
#define MOTOR1_B 3
#define MOTOR2_A 1
#define MOTOR2_B 4
#define MOTOR3_A 5 
#define MOTOR3_B 7
#define MOTOR4_A 0
#define MOTOR4_B 6

using SRC_T = ShiftRegController< MOTORLATCH,MOTORCLK,MOTORENABLE,MOTORDATA>;

using PWMPin1_T = HALPWMPin<11>;
using PWMPin2_T = HALPWMPin<3>;
using PWMPin3_T = HALPWMPin<6>;
using PWMPin4_T = HALPWMPin<5>;

class AFMotorShield
{						
		PWMPin1_T PWMPinM1;
		PWMPin2_T PWMPinM2;
		PWMPin3_T PWMPinM3;
		PWMPin4_T PWMPinM4;	
	public:

		SRC_T src;		
		DCMotor<MOTOR1_A,MOTOR1_B,PWMPin1_T,SRC_T> m1;
		DCMotor<MOTOR2_A,MOTOR2_B,PWMPin2_T,SRC_T> m2;
		DCMotor<MOTOR3_A,MOTOR3_B,PWMPin3_T,SRC_T> m3;
		DCMotor<MOTOR4_A,MOTOR4_B,PWMPin4_T,SRC_T> m4;

	AFMotorShield(void):
		m1(PWMPinM1,&src),
		m2(PWMPinM2,&src),
		m3(PWMPinM3,&src),
		m4(PWMPinM4,&src)
	{
		src.init();
	}
};

```

app: 
 * higher level abstractions, such as StdIO Channels on UARTs, DC-Motor Controllers, RS485 Channels
 * uses HAL,dev,util
 * sample usage of UART StdIO Channel, using also the UART abstraction from HAL

```C++
//...

static FILE mystdout_i ;

UARTChannel<UART0> log_uart(57600);
//mea culpa - connecting the ISR is still not abstracted by the HAL
ISR(USART0_RX_vect){ log_uart.rxInterrupt();}

BaseChannel*   StdIOChannel::bc=0;

StdIOChannel my_ch(&log_uart,mystdout_i);

printf("Hello World file changedt last on : " __TIMESTAMP__);
```

 * sample usage of UART RS485 Channel, using also the UART abstraction from HAL and 

```C++

HALPin<16> DriverEnablePin;

void driverON() {
	DriverEnablePin.writeHigh();
}

void driverOFF() {
	DriverEnablePin.writeLow();
}

RS485Channel<UART3, driverON, driverOFF> my_rs485_channel(57600);

ISR(USART3_RX_vect){ my_rs485_channel.rxInterrupt();}

#define RS485send(s) my_rs485_channel.send((uint8_t*)(s),sizeof(s)-1)
```
 	