/*
* DC_Motor.h
*
* Created: 31.01.2017 11:17:22
*  Author: mac
*/


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include <stdio.h>

#include "HAL/HAL.h"

#include "ShiftRegController.h"
namespace DCMotor
{
// Constants that the user passes in to the motor calls
#define FORWARD 1
#define BACKWARD 2
#define BRAKE 3
#define RELEASE 4

class DCMotorBase
{
	public:
		virtual void run(uint8_t cmd)=0;
		virtual void setSpeed(uint8_t speed)=0;

};

template<uint8_t APinNumber, uint8_t BPinNumber, auto &PWMPin,typename T>
class DCMotor:public DCMotorBase
{
	uint8_t motornum;
    T& src;
	public:
	DCMotor(T& p_src):src(p_src){
		//printf("DCMotor()\n");
		src.latch_state &= ~_BV(APinNumber) & ~_BV(BPinNumber); // set both motor pins to 0
		src.latch_tx();
		
		PWMPin.mode(OUTPUT);
		PWMPin.write(HIGH);
		PWMPin.initPWM();

	}
	void run(uint8_t cmd)
	{

		switch (cmd) {
			case FORWARD:
			//printf("fwd %02x\n",src.latch_state);
			src.latch_state |= _BV(APinNumber);
			//printf("fwd %02x\n",src.latch_state);
			src.latch_state &= ~_BV(BPinNumber);
			src.latch_tx();
			break;
			
			case BACKWARD:
			//printf("rev %02x\n",src.latch_state);
			src.latch_state &= ~_BV(APinNumber);
			//printf("rev %02x\n",src.latch_state);
			src.latch_state |= _BV(BPinNumber);
			src.latch_tx();
			break;
			
			case RELEASE:
			//printf("off\n");
			src.latch_state &= ~_BV(APinNumber);     // A and B both low
			src.latch_state &= ~_BV(BPinNumber);
			src.latch_tx();
			break;
		}
	}
	
	void setSpeed(uint8_t speed) {
			PWMPin.setPWM(speed);
	}


};

}

#endif /* DC_MOTOR_H_ */
