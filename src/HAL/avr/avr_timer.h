
#ifndef AVR_TIMER_H_
#define AVR_TIMER_H_

// select a type from size parameter
template <int s>
struct TSize  {};
 
template <>
struct TSize<16> 
{
  typedef uint16_t type; 
};

template <>
struct TSize<8> 
{
  typedef uint8_t type; 
};


template<class T>
class GenericTimer {

	typename TSize<T::TimerBits>::type m_reload;

public:

	GenericTimer(typename TSize<T::TimerBits>::type reload) :
			m_reload(reload) {
		T::TCCRA(0);               // clear control register A
		T::TCCRB(0);               //TCCR5B = 0;
		T::TCNT( (1L >> T::TimerBits) - m_reload);
		T::setPreScaler(64);
	}

	void reload() {
		T::TCNT( (1L >> T::TimerBits)  - m_reload);
	}

	void setReload(typename TSize<T::TimerBits>::type reload) {
		m_reload = reload;
	}

	void enableInt(void) {
		T::setTIMSK(_BV(TOIE1)); //TIMSK5 = _BV(TOIE1);     // sets the timer overflow interrupt enable bit
	}
	void disableInt(void) {
		T::clrTIMSK(_BV(TOIE1));
	}

private:

	GenericTimer(const GenericTimer &c);
	GenericTimer& operator=(const GenericTimer &c);
};


// abstraction for avr timer register access
template<int timernum> class AVRTimer
{
public:
    static const int TimerBits=0;
    static_assert(timernum <= 5, "Timer not available");
};


// off 1 8 32 64 128 256 1024
template<class T> static inline void setPreScalerA(const uint16_t scale)
{
        T::clrTCCRB((1<<CS22)|   (1<<CS21)|  (1<<CS20));
        if(scale==1)    T::setTCCRB(                          (1<<CS20));
        if(scale==8)    T::setTCCRB(              (1<<CS21)            );
        if(scale==32)   T::setTCCRB(              (1<<CS21)|  (1<<CS20));
        if(scale==64)   T::setTCCRB( (1<<CS22)                         );
        if(scale==128)  T::setTCCRB( (1<<CS22)|               (1<<CS20));
        if(scale==256)  T::setTCCRB( (1<<CS22)|   (1<<CS21)            );
        if(scale==1024) T::setTCCRB( (1<<CS22)|   (1<<CS21)|  (1<<CS20));
}

// off 1 8 64 256 1024 inputfall inputraise
template<class T> static inline void setPreScalerB(const uint16_t scale)
{
        T::clrTCCRB((1<<CS22)|   (1<<CS21)|  (1<<CS20));
        if(scale==1)    T::setTCCRB(                          (1<<CS20));
        if(scale==8)    T::setTCCRB(              (1<<CS21)            );
        if(scale==64)   T::setTCCRB(              (1<<CS21)|  (1<<CS20));
        if(scale==256)  T::setTCCRB( (1<<CS22)                         );
        if(scale==1024) T::setTCCRB( (1<<CS22)|               (1<<CS20));
        if(scale==6)    T::setTCCRB( (1<<CS22)|   (1<<CS21)            ); // ext input falling edge
        if(scale==7)    T::setTCCRB( (1<<CS22)|   (1<<CS21)|  (1<<CS20)); // ext input rising
}


template<> class AVRTimer<0>
{
public:
#if defined( TCNT0)
    static const int TimerBits=8;
	static void TCNT(uint16_t _v){TCNT0 = _v;}
	static void TCCRA(uint8_t _v){TCCR0A = _v;}
	static void TCCRB(uint8_t _v){TCCR0B = _v;}
	static void setTCCRB(uint8_t _v){TCCR0B |= _v;}
	static void clrTCCRB(uint8_t _v){TCCR0B &=  ~ _v;}
	static void setTIMSK(uint8_t _v){TIMSK0 |= _v;}
	static void clrTIMSK(uint8_t _v){TIMSK0 &= _v;}
    static void setPreScaler(const uint16_t scale) { setPreScalerB<  AVRTimer<0>>(scale);} // off 1 8 64 256 1024 inputfall inputraise
#endif
};

template<> class AVRTimer<1>
{
public:
#if defined( TCNT1)
    static const int TimerBits=16;
	static void TCNT(uint16_t _v){TCNT1 = _v;}
	static void TCCRA(uint8_t _v){TCCR1A = _v;}
	static void TCCRB(uint8_t _v){TCCR1B = _v;}
	static void setTCCRB(uint8_t _v){TCCR1B |= _v;}
	static void clrTCCRB(uint8_t _v){TCCR1B &=  ~ _v;}
	static void setTIMSK(uint8_t _v){TIMSK1 |= _v;}
	static void clrTIMSK(uint8_t _v){TIMSK1 &= _v;}
    static void setPreScaler(const uint16_t scale) { setPreScalerB<  AVRTimer<1>>(scale);} // off 1 8 64 256 1024 inputfall inputraise
#endif
};

template<> class AVRTimer<2>
{
public:
#if defined( TCNT2)
    static const int TimerBits=8; 
	static void TCNT(uint16_t _v){TCNT2 = _v;}
	static void TCCRA(uint8_t _v){TCCR2A = _v;}
	static void TCCRB(uint8_t _v){TCCR2B = _v;}
	static void setTCCRB(uint8_t _v){TCCR2B |= _v;}
	static void clrTCCRB(uint8_t _v){TCCR2B &=  ~ _v;}
	static void setTIMSK(uint8_t _v){TIMSK2 |= _v;}
	static void clrTIMSK(uint8_t _v){TIMSK2 &= _v;}
    static void setPreScaler(const uint16_t scale) { setPreScalerA<  AVRTimer<2>>(scale);} // off 1 8 32 64 128 256 1024
#endif
};

template<> class AVRTimer<3>
{
public:
#if defined( TCNT3)
    static const int TimerBits=16;
	static void TCNT(uint16_t _v){TCNT3 = _v;}
	static void TCCRA(uint8_t _v){TCCR3A = _v;}
	static void TCCRB(uint8_t _v){TCCR3B = _v;}
	static void setTCCRB(uint8_t _v){TCCR3B |= _v;}
	static void clrTCCRB(uint8_t _v){TCCR3B &=  ~ _v;}
	static void setTIMSK(uint8_t _v){TIMSK3 |= _v;}
	static void clrTIMSK(uint8_t _v){TIMSK3 &= _v;}
    static void setPreScaler(const uint16_t scale) { setPreScalerB<  AVRTimer<3>>(scale);} // off 1 8 64 256 1024 inputfall inputraise
#endif
};

template<> class AVRTimer<4>
{
public:
#if defined( TCNT4)
    static const int TimerBits=16;
	static void TCNT(uint16_t _v){TCNT4 = _v;}
	static void TCCRA(uint8_t _v){TCCR4A = _v;}
	static void TCCRB(uint8_t _v){TCCR4B = _v;}
	static void setTCCRB(uint8_t _v){TCCR4B |= _v;}
	static void clrTCCRB(uint8_t _v){TCCR4B &=  ~ _v;}
	static void setTIMSK(uint8_t _v){TIMSK4 |= _v;}
	static void clrTIMSK(uint8_t _v){TIMSK4 &= _v;}
    static void setPreScaler(const uint16_t scale) { setPreScalerB<  AVRTimer<4>>(scale);} // off 1 8 64 256 1024 inputfall inputraise

#endif
};

template<> class AVRTimer<5>
{
public:
#if defined( TCNT5)
    static const int TimerBits=16;
	static void TCNT(uint16_t _v){TCNT5 = _v;}
	static void TCCRA(uint8_t _v){TCCR5A = _v;}
	static void TCCRB(uint8_t _v){TCCR5B = _v;}
	static void setTCCRB(uint8_t _v){TCCR5B |= _v;}
	static void clrTCCRB(uint8_t _v){TCCR5B &=  ~ _v;}
    static void setTIMSK(uint8_t _v){TIMSK5 |= _v;}
	static void clrTIMSK(uint8_t _v){TIMSK5 &= _v;}
    static void setPreScaler(const uint16_t scale) { setPreScalerB<AVRTimer<5>>(scale);} // off 1 8 64 256 1024 inputfall inputraise
#endif
};

#endif