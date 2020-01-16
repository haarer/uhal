# uhal
Micro hardware abstraction layer in c++
Currently implemented for some avr cpus. The blink example looks like this (code size 304 bytes):

```C
#include "HAL/HAL.h"
#include "HAL/HAL_Board.h"
using namespace UHAL;
GenericBoard<ArduinoMega2560> board;
int main(void)
{
	board.pin13.modeOut();
	while (1)
	{
		board.pin13.writeHigh();
		board.cpu.delay(100);
		board.pin13.writeLow();
		board.cpu.delay(100);
	}
}
```

**subdirectories**

util:
 * library code used by code below, with no hardware dependencies, such as crc, also some hardware agnostic utilities as job control
 
HAL:  
 * the hardware abstraction. IO Pins, UARTs, Timers
 
dev:
 * abstractions for hardware connected to pins, such as shift registers, Ada Fruit Motor Shields, Dallas Semi Sensors, DC Motors
 * uses HAL, util
 * sample code using the DC Motor and PWM Pins from HAL (excerpt from the AdaFruit Motor shield code)

app: 
 * higher level abstractions, such as StdIO Channels on UARTs, DC-Motor Controllers, RS485 Channels
 * uses HAL,dev,util
 * sample usage of UART StdIO Channel, using also the UART abstraction from HAL
