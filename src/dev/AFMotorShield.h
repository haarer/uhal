/*
* Driver for Adafruit Arduino Motor Shield V1 (Dual L293D and HC595 )
*  AFMotorShield.h
*
* Created: 04.02.2017 11:06:06
*  Author: mac
*/


#ifndef AFMOTORSHIELD_H_
#define AFMOTORSHIELD_H_

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
#define MOTOR3_A 5 // im schaltplan sind m3 und m4 vertauscht !
#define MOTOR3_B 7
#define MOTOR4_A 0
#define MOTOR4_B 6



using SRC_T = ShiftRegController< MOTORLATCH,MOTORCLK,MOTORENABLE,MOTORDATA>;


using PWMPin1_T = HALPWMPin<11>;
using PWMPin2_T = HALPWMPin<3>;
using PWMPin3_T = HALPWMPin<6>;
using PWMPin4_T = HALPWMPin<5>; // dies steuert Motor 4 und das ist pin 1 des L293D

//#define _BV(b) (1UL << (b))


class AFMotorShield
{
								
		PWMPin1_T PWMPinM1;
		PWMPin2_T PWMPinM2;
		PWMPin3_T PWMPinM3;
		PWMPin4_T PWMPinM4;	
	public:

		SRC_T src;		
		DCMotor::DCMotor<MOTOR1_A,MOTOR1_B,PWMPin1_T,SRC_T> m1;
		DCMotor::DCMotor<MOTOR2_A,MOTOR2_B,PWMPin2_T,SRC_T> m2;
		DCMotor::DCMotor<MOTOR3_A,MOTOR3_B,PWMPin3_T,SRC_T> m3;
		DCMotor::DCMotor<MOTOR4_A,MOTOR4_B,PWMPin4_T,SRC_T> m4;


	AFMotorShield(void):
		m1(PWMPinM1,&src),
		m2(PWMPinM2,&src),
		m3(PWMPinM3,&src),
		m4(PWMPinM4,&src)
	{
		//printf("AFMotorShield()\n");
		src.init();
	}
};



#endif /* AFMOTORSHIELD_H_ */
