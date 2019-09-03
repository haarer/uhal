/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
*/

#ifndef __INTERVALTIMER_H__
#define __INTERVALTIMER_H__

#include <avr/io.h>
#include <avr/interrupt.h>
#define MAXTIMER 65536

//fixme handle scale values unknown to scaler
uint16_t setPreScaler(const uint16_t scale) {
	uint16_t bitvalue;
#if ( defined( __AVR_ATmega32__) || defined( __AVR_ATmega328__) || defined( __AVR_ATmega328P__)|| defined( __AVR_ATmega168__) || defined( __AVR_ATmega168PA__) || defined( __AVR_ATmega168A__) || defined( __AVR_ATmega2560__) )

	if(scale==1) bitvalue = (1<<CS20);
	if(scale==8) bitvalue = (1<<CS21);
	if(scale==32) bitvalue = (1<<CS21)| (1<<CS20);
	if(scale==64) bitvalue = (1<<CS22);
	if(scale==128) bitvalue = (1<<CS22)|(1<<CS21);
	if(scale==1024) bitvalue = (1<<CS22)|(1<<CS22)| (1<<CS20);

#elif ( defined( __AVR_ATtiny2313__) || defined(__AVR_ATtiny4313__) )
	if (scale == 1)
	bitvalue = (1 << CS00);
	if (scale == 8)
	bitvalue = (1 << CS01);
	if (scale == 64)
	bitvalue = (1 << CS01) | (1 << CS00);
	if (scale == 256)
	bitvalue = (1 << CS02);
	if (scale == 1024)
	bitvalue = (1 << CS02) | (1 << CS00);
#else
#error " ! UNSUPPORTED CPU !"
#endif
	return bitvalue;
}

typedef void (*Func)(void);

#define IOPORTS_TO_STRING(name) #name
#define IOPORTS_IRQ_HANDLER(vector, type) asm(IOPORTS_TO_STRING(vector)) __attribute__ ((type, __INTR_ATTRS))

#ifdef TCNT1
class Timer1
{
//	static Func ov_fp;
public:
// funktioniert nicht in templates
// funktioniert nicht, wenn der funktionsbody hier ist - muß in der cpp datei sein
//	static void __vector_handleOverflow() asm("__vector_50") __attribute__((__signal__,__used__,  __externally_visible__));

//	static void __vector_handleCapture()  asm("__vector_46") __attribute__((__signal__,__used__,  __externally_visible__));

//	static void registerCB(Func _fp)
//	{
//		ov_fp=_fp;
//	}

	static void TCNT(uint16_t _v)
	{
		TCNT1 = _v;
	}

	static void TCCRA(uint8_t _v)
	{
		TCCR1A = _v;
	}
	static void TCCRB(uint8_t _v)
	{
		TCCR1B = _v;
	}
	static void setTCCRB(uint8_t _v)
	{
		TCCR1B |= _v;
	}
	static void setTIMSK(uint8_t _v)
	{
		TIMSK1 |= _v;
	}
	static void clrTIMSK(uint8_t _v)
	{
		TIMSK1 &= _v;
	}
};
#endif

#ifdef TCNT2
class Timer2
{
//	static Func ov_fp;
public:
	// funktioniert nicht in templates
	// funktioniert nicht, wenn der funktionsbody hier ist - muß in der cpp datei sein
//	static void __vector_handleOverflow() asm("__vector_50") __attribute__((__signal__,__used__,  __externally_visible__));

//	static void __vector_handleCapture()  asm("__vector_46") __attribute__((__signal__,__used__,  __externally_visible__));

//	static void registerCB(Func _fp)
//	{
//		ov_fp=_fp;
//	}

	static void TCNT(uint16_t _v)
	{
		TCNT2 = _v;
	}

	static void TCCRA(uint8_t _v)
	{
		TCCR2A = _v;
	}
	static void TCCRB(uint8_t _v)
	{
		TCCR2B = _v;
	}
	static void setTCCRB(uint8_t _v)
	{
		TCCR2B |= _v;
	}
	static void setTIMSK(uint8_t _v)
	{
		TIMSK2 |= _v;
	}
	static void clrTIMSK(uint8_t _v)
	{
		TIMSK2 &= _v;
	}

};
#endif

#ifdef TCNT5
class Timer5
{
//	static Func ov_fp;
public:
	// funktioniert nicht in templates
	// funktioniert nicht, wenn der funktionsbody hier ist - muß in der cpp datei sein
//	static void __vector_handleOverflow() asm("__vector_50") __attribute__((__signal__,__used__,  __externally_visible__));

//	static void __vector_handleCapture()  asm("__vector_46") __attribute__((__signal__,__used__,  __externally_visible__));

//	static void registerCB(Func _fp)
//	{
//		ov_fp=_fp;
//	}

	static void TCNT(uint16_t _v)
	{
		TCNT5 = _v;
	}

	static void TCCRA(uint8_t _v)
	{
		TCCR5A = _v;
	}
	static void TCCRB(uint8_t _v)
	{
		TCCR5B = _v;
	}
	static void setTCCRB(uint8_t _v)
	{
		TCCR5B |= _v;
	}
	static void setTIMSK(uint8_t _v)
	{
		TIMSK5 |= _v;
	}
	static void clrTIMSK(uint8_t _v)
	{
		TIMSK5 &= _v;
	}
};
#endif

#ifdef TCNT4
class Timer4
{
	static Func fp;
public:
	//	static void __vector_handleOverflow() asm("__vector_45") __attribute__((__signal__,  __externally_visible__));
	static void handleOverflow(void)
	{
		if (fp)
		fp();
	};

	static void registerCB(Func _fp)
	{
		fp=_fp;
	}

	static void TCNT(uint16_t _v)
	{
		TCNT4 = _v;
	}

	static void TCCRA(uint8_t _v)
	{
		TCCR4A = _v;
	}
	static void TCCRB(uint8_t _v)
	{
		TCCR4B = _v;
	}
	static void setTCCRB(uint8_t _v)
	{
		TCCR4B |= _v;
	}
	static void setTIMSK(uint8_t _v)
	{
		TIMSK4 |= _v;
	}
	static void clrTIMSK(uint8_t _v)
	{
		TIMSK4 &= _v;
	}
};
#endif

template<class T/*,Func _F*/>
class IntervalTimer {
	uint16_t m_reload;
	//functions
public:

	IntervalTimer(uint16_t reload) :
			m_reload(reload) {
		T::TCCRA(0);               // clear control register A
		T::TCCRB(0);               //TCCR5B = 0;
		T::TCNT( MAXTIMER - m_reload);
		T::setTCCRB(setPreScaler(64));
	}

	void handleOverflow() {
		T::TCNT( MAXTIMER - m_reload);
	}

	void enable(void) {
		T::setTIMSK(_BV(TOIE1)); //TIMSK5 = _BV(TOIE1);     // sets the timer overflow interrupt enable bit
	}
	void disable(void) {
		T::clrTIMSK(_BV(TOIE1));
	}

private:

	IntervalTimer(const IntervalTimer &c);
	IntervalTimer& operator=(const IntervalTimer &c);
};

#ifdef TCCR5A
template<class T>
class CaptureTimer
{

	//variables

	static volatile uint16_t last_capture;
	static volatile uint32_t fastcount;

public:

	static volatile uint32_t capture;
	static void handleOverflow(void)
	{
		T::TCNT( 0);
		fastcount++;
	}

	static void handleCapture(void)
	{
		uint16_t v = ICR5;

		if (v < last_capture) // wrapped case
		{
			capture = ((uint32_t)(v) )-(uint32_t)last_capture;

		}
		else
		capture = (uint32_t)(v-last_capture);

		capture = capture + 0x10000L * fastcount;
		fastcount=0;
		last_capture = v;

	}

protected:
private:

	//functions
public:
	CaptureTimer(void)
	{
		capture=0;
		last_capture=0;
		fastcount=0;

		// timer 5 250 khz takt, 50 khz rate
		TCCR5A = 0;// clear control register A
		TCCR5B = 0;
		TCNT5 = 0;
		TCCR5B |= (1<<CS51 );// / 8 = 2Mhz
		TIMSK5 = (1<<TOIE5) |(1<<ICIE5);// sets the timer overflow interrupt enable bit

	}

	void enable(void)
	{
		TIMSK5 |= ((1<<TOIE5) |(1<<ICIE5));
	}
	void disable(void)
	{
		TIMSK5 &= ((1<<TOIE5) |(1<<ICIE5));
	}

protected:
private:
	CaptureTimer( const CaptureTimer &c );
	CaptureTimer& operator=( const CaptureTimer &c );
};

template<class T> volatile uint16_t CaptureTimer<T>::last_capture=0;
template<class T> volatile uint32_t CaptureTimer<T>::fastcount=0;
template<class T> volatile uint32_t CaptureTimer<T>::capture=0;

#endif

#define AVR_INTERVAL_TIMER4(_cb) Func Timer4::fp =0; ISR(TIMER4_OVF_vect){ Timer4::handleOverflow();} IntervalTimer<Timer4,_cb>

#define AVR_INTERVAL_TIMER5(_cb) \
	Func Timer5::ov_fp =0;\
	void Timer5::__vector_handleOverflow(void){  if (ov_fp) ov_fp();} \
	void Timer5::__vector_handleCapture(void){ ;} \
	IntervalTimer<Timer5,_cb>

#define AVR_CAPTURE_TIMER5 \
	Func Timer5::ov_fp =0;\
	void Timer5::__vector_handleOverflow(void){CaptureTimer<Timer5>::handleOverflow();} \
	void Timer5::__vector_handleCapture(void){  CaptureTimer<Timer5>::handleCapture();} \
	CaptureTimer<Timer5>

#define AVR_INTERVAL_TIMER(_vect,_cb) Func Timer4::fp =0; void Timer4::__vector_handleOverflow(void){  if (fp) fp();} IntervalTimer<Timer4,_cb>

#endif //__INTERVALTIMER_H__

