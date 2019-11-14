/*
 * Driver for HC595 shift register 
 *  set latch_state
 *  call latch_tx()
 * ShiftRegController.h
 *
 * Created: 04.02.2017 12:13:26
 *  Author: mac
 */ 


#ifndef SHIFTREGCONTROLLER_H_
#define SHIFTREGCONTROLLER_H_


#include "HAL/HAL.h"

using namespace UHAL;

template<auto &MotorLatchPin,auto &MotorEnablePin,auto &MotorDataPin, auto &MotorClkPin>
class ShiftRegController
{

	public:
	uint8_t latch_state;

	ShiftRegController(void)
	{
		//printf("ShiftRegController()\n");
		MotorLatchPin.mode(OUTPUT);
		MotorEnablePin.mode(OUTPUT);
		MotorDataPin.mode(OUTPUT);
		MotorClkPin.mode(OUTPUT);

		latch_state = 0;
		latch_tx();  // "reset"

		//ENABLE_PORT &= ~_BV(ENABLE); // enable the chip outputs!
		MotorEnablePin.write(LOW);
	}

	void latch_tx(void) {
		uint8_t i;
		//printf("latch_tx %02x\n",latch_state);
		//LATCH_PORT &= ~_BV(LATCH);
		MotorLatchPin.write(LOW);

		//SER_PORT &= ~_BV(SER);
		MotorDataPin.write(LOW);

		for (i=0; i<8; i++) {
			//CLK_PORT &= ~_BV(CLK);
			MotorClkPin.write(LOW);

			if (latch_state & _BV(7-i)) {
				//SER_PORT |= _BV(SER);
				MotorDataPin.write(HIGH);
				} else {
				//SER_PORT &= ~_BV(SER);
				MotorDataPin.write(LOW);
			}
			//CLK_PORT |= _BV(CLK);
			MotorClkPin.write(HIGH);
		}
		//LATCH_PORT |= _BV(LATCH);
		MotorLatchPin.write(HIGH);
		//printf("after latch_tx %02x\n",latch_state);
	}
	
	void init(void)
	{
		//printf("ShiftRegController.init()\n");
		latch_state = 0;
		latch_tx();  // "reset"

	}

};



#endif /* SHIFTREGCONTROLLER_H_ */
