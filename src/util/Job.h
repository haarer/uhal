
/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
*/


#ifndef JOB_H_
#define JOB_H_

#include <stdint.h>

typedef void (*voidFuncPtr)(void);
// Registered.h :
template<class registered>
struct Registered {
	static registered *registry;
	registered *chain;
	Registered() : chain(registry) {registry=static_cast<registered*>(this);}
};


class Job : public Registered<Job>
{
	voidFuncPtr m_p;
	uint16_t m_periodic;
	uint32_t m_lastrun;
	uint16_t m_initialdelay;
	public:
	bool m_active;
		Job(voidFuncPtr p,uint16_t periode=0,uint16_t initialdelay=0):m_p(p),m_periodic(periode),m_lastrun(0),m_initialdelay(initialdelay),m_active(true)
	{
		
	}
	void setRate(uint16_t r){m_periodic=r;}
	void run(uint32_t t_ms)
	{
		// tbd handle wraparound !!
		if(t_ms >= m_lastrun + m_periodic + m_initialdelay && m_active)
		{
			m_p();
			m_lastrun=t_ms;
			m_initialdelay=0;
		}
	}
};




#endif /* JOB_H_ */
