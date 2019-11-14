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



// Bit positions in the 74HCT595 shift register output
#define MOTOR1_A 2
#define MOTOR1_B 3
#define MOTOR2_A 1
#define MOTOR2_B 4
#define MOTOR3_A 5 // im schaltplan sind m3 und m4 vertauscht !
#define MOTOR3_B 7
#define MOTOR4_A 0
#define MOTOR4_B 6



template<auto board>
class AFMotorShield
{
					
		ShiftRegController<board.pin12,board.pin7,board.pin8,board.pin4> src;	

		const uint8_t MOTORLATCH=12;
		const uint8_t MOTORENABLE=7;
		const uint8_t MOTORDATA=8;
		const uint8_t MOTORCLK=4;
	public:

			
		DCMotor::DCMotor<MOTOR1_A,MOTOR1_B,board.pin11,decltype(src)> m1;
		DCMotor::DCMotor<MOTOR2_A,MOTOR2_B,board.pin3,decltype(src)> m2;
		DCMotor::DCMotor<MOTOR3_A,MOTOR3_B,board.pin6,decltype(src)> m3;
		DCMotor::DCMotor<MOTOR4_A,MOTOR4_B,board.pin5,decltype(src)> m4;


	AFMotorShield(void):
		src(),
		m1(src),
		m2(src),
		m3(src),
		m4(src)
	{
		//printf("AFMotorShield()\n");
		//src.init(); // part of constructor anyway
	}
};



#endif /* AFMOTORSHIELD_H_ */
