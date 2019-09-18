/*
MotorController.h

Created: 02.04.2015 23:27:46
Author: mac
*/


#ifndef __MOTORCONTROLLER_H__
#define __MOTORCONTROLLER_H__

#include <stdint.h>
#include <stdlib.h>
#include "BaseMotorController.h"
#include "DCMotor.h"
#include "HAL/HAL.h"

template<class T_Motor,uint32_t micros(void),uint32_t millis(void),volatile  uint16_t &m_pinChCount>
class MotorController : public BaseMC
{
	//variables
	protected:
	private:
	char textmsg[32];


	T_Motor* m_motor;


	//functions
	public:
	MotorController(T_Motor* m):BaseMC(),m_motor(m) {
		m_pinChCount = 0;
		m_i=0;
	};
	~MotorController()
	{
	};

	void ResetBlock(void)
	{
		m_blocked = false;
		m_time_last_moved = millis(); // pretend to have just moved
	}
	
	void Calibrate(uint8_t cal)
	{
		m_calspeed = cal;
		m_motor->run(BACKWARD);
		m_state = MS_REV;
		m_motor->setSpeed(m_calspeed);
		m_calibrating = true;
		ResetBlock();
//		sprintf(textmsg,"%lu start calibrating REV",millis());
//		MQTT::publish("msg","sa",textmsg);
	}




	void EstimateState(void)
	{
		uint32_t t_now=micros();
		m_delta_t = t_now - m_time_last_state;
		delta_s = m_pinChCount ;

		// FIXME: this should be a state estimator, considering mass. While braking the motor still moves forward but the m_state signals reverse because the motor is powered reversw when braking.
		if (m_state == MS_FWD)
		m_current_pos -= delta_s;

		if (m_state == MS_REV)
		m_current_pos += delta_s;

		m_time_last_state= t_now;
		
		m_pinChCount = 0;
		
	}

template<typename T>
inline T max(T a, T b) {
	return a > b ? a : b;
}


	
	void Update(void)
	{
		//digitalWrite(21, HIGH);
		EstimateState();

		if (! m_calibrating  )
		{

			m_abweichung = m_target_pos - m_current_pos;

			// regler, p anteil
			m_p = ((int32_t) m_abweichung ) * ( (int32_t)m_param.p);
			if (m_p > 500L) m_p = 500L;
			if (m_p < -500L) m_p = -500L;

			// regler, i anteil anti windup, dont increase i if its already outside +/- 500
			// scale down i
			m_i  +=  ( ((int32_t) m_abweichung ) * ( (int32_t)m_param.i )  ) / 10L;

			if (m_i > 500L) m_i = 500L;
			if (m_i < -500L) m_i = -500L;
			
			//reset i anteil
			if(m_abweichung == 0)
			{
				m_i=0;
			}
			
			// 
			m_stellwert = m_p + m_i;


			if (m_stellwert > 0)
			{
				m_motor->run(BACKWARD);
				m_motor->setSpeed( m_stellwert > m_param.max_speed ? m_param.max_speed : m_stellwert);
				m_state = MS_REV;
			}
			else
			{
				m_motor->run(FORWARD);
				m_motor->setSpeed(m_stellwert < -m_param.max_speed ? m_param.max_speed : -m_stellwert);
				m_state = MS_FWD;
			}


		}


		// if motor isnt off and doesnt move for xx ms, it is flagged blocked
		// if it has moved it is not blocked and the block timer is reset.
		if (delta_s != 0)
		{

			// has moved
			if (m_calibrating && m_state == MS_FWD)
			{
				m_drivelength += delta_s;
			}


			ResetBlock();
		}
		else
		{
			if ((m_state != MS_OFF) && (millis() > m_time_last_moved + 500)) // not moving for 100ms is blocked
			{
				m_blocked = true;

			}
		}

		if (m_blocked)
		{
			// stopped

			// FIXME: this should be a switch /case state machine, the setting of the state might trigger following ifs
			if (m_calibrating and  m_state == MS_FWD)
			{
				m_motor->setSpeed(0);
				m_motor->run(RELEASE);
				m_state = MS_OFF;
				//motor blocked
				printf("t= %lu ",millis());
				printf("calibration done, drivelength :%d \n",m_drivelength);
				m_current_pos = 0;
				m_target_pos = 0;
				m_abweichung=0;
				m_p=0;
				m_i=0;
				m_d=0;
				m_stellwert=0;
				m_i=0;
				m_calibrating = false;

			}


			if (m_calibrating and  m_state == MS_REV)
			{
				m_drivelength = 0;
				m_motor->run(FORWARD);
				m_motor->setSpeed(m_calspeed);
				m_state = MS_FWD;
				ResetBlock();
				printf("t= %lu ",millis());
				printf("calibrating FWD\n");

			}

			if (not m_calibrating and m_state != MS_OFF)
			{
				//printf("motor blocked during normal movement \n");
				//m_motor->setSpeed(0);
				// m_motor->run(RELEASE);
				// m_state = MS_OFF;

			}

		}


		//digitalWrite(21, LOW);
	}


	protected:
	private:
	MotorController( const MotorController &c );
	MotorController& operator=( const MotorController &c );

}; //MotorController

#endif //__MOTORCONTROLLER_H__
