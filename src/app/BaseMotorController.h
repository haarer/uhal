/*
BaseMotorController.h

Created: 19.03.2019 
Author: mac
*/


#ifndef __BASEMOTORCONTROLLER_H__
#define __BASEMOTORCONTROLLER_H__

#include <stdint.h>
#include <stdlib.h>

#pragma message "fixme : move locking interupts to hal"
#ifdef __AVR__
#include <avr/interrupt.h> //		cli();
#endif

enum MotorState : uint8_t {MS_FWD, MS_REV, MS_OFF};
	
struct MotorControllerState
{
	// settable values
	int16_t target_pos;
	int16_t p_param ;
	int16_t i_param ;
	int16_t d_param;
	
	
	// read only values
	int16_t current_pos;
	int16_t drivelength;
	bool calibrating;
	bool blocked;

	unsigned long time_last_moved;
	unsigned long time_last_state;

	// reglerzustand
	uint16_t delta_t;
	int16_t delta_s;
	int16_t abweichung;
	int32_t p ;
	int32_t i ;
	int32_t d;
	int32_t stellwert;

	// motor parameter
	uint8_t calspeed;

};
	
class MCParams
{
	public:
	int16_t p;		//reglerkonstanten
	int16_t i ;
	int16_t d;
	uint8_t max_speed;
	MCParams(const int16_t _p,const int16_t _i,const int16_t _d):p(_p),i(_i),d(_d),max_speed(200){};
};

class BaseMC
{
	public:
		int16_t m_target_pos;
		MCParams m_param ;		//reglerkonstanten
	protected:
	int16_t m_current_pos;

	int16_t m_drivelength;
	bool m_calibrating;
	MotorState m_state;
	bool m_blocked;

	unsigned long m_time_last_moved;
	unsigned long m_time_last_state;


	uint16_t m_delta_t;
	int16_t delta_s;
	int16_t m_abweichung;
	int32_t m_p ;
	int32_t m_i ;
	int32_t m_d;


	int32_t m_stellwert;

	uint8_t m_calspeed;
	public:
	BaseMC(void): m_target_pos(0),m_param(50, 2,0), m_current_pos(0), m_drivelength(0), m_calibrating(false), m_state(MS_OFF), m_blocked(false), m_time_last_moved(0) 
	{
	}
	~BaseMC()
	{
	};
	MotorControllerState GetState(void)
	{
		MotorControllerState ms;
		#ifdef __AVR__
		cli();
		#endif
		ms.calibrating=m_calibrating;
		ms.target_pos=m_target_pos;
		ms.current_pos=m_current_pos;
		ms.delta_t=m_delta_t;
		ms.delta_s=delta_s;
		ms.abweichung=m_abweichung;
		ms.p=m_p;
		ms.i=m_i;
		ms.d=m_d;
		ms.stellwert=m_stellwert;
		ms.blocked=m_blocked;
		ms.drivelength=m_drivelength;
		#ifdef __AVR__
		sei();
		#endif
		return ms;
	}


};

#endif //__BASEMOTORCONTROLLER_H__
