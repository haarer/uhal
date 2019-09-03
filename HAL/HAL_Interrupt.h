/*
 * HAL_Interrupt.h
 *
 *  Created on: 24.01.2018
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
 */

#ifndef HAL_HAL_INTERRUPT_H_
#define HAL_HAL_INTERRUPT_H_



#if defined(__AVR__)

// ---------------------------------- AVR specific ------------------------------------------
#include <avr/io.h>
#include <avr/interrupt.h>
// ----------------------------------- Interrupt pins --------------------------


// see here https://www.mail-archive.com/avr-libc-dev@nongnu.org/msg02454.html
#define STRINGIFY(name) #name
#define CLASS_IRQ(name, vector) \
    static void name(void) asm(STRINGIFY(vector)) \
    __attribute__ ((signal, __INTR_ATTRS))

typedef void (*Func)(void);

#define CHANGE 1
#define FALLING 2
#define RISING 3

static inline __attribute__((always_inline))
void enableINT(uint8_t interruptNum, int mode) {
	switch (interruptNum) {
#if defined(EICRA) && defined(EICRB) && defined(EIMSK)
	case 2:
	EICRA = (EICRA & ~((1 << ISC00) | (1 << ISC01))) | (mode << ISC00);
	EIMSK |= (1 << INT0);
	break;
	case 3:
	EICRA = (EICRA & ~((1 << ISC10) | (1 << ISC11))) | (mode << ISC10);
	EIMSK |= (1 << INT1);
	break;
	case 4:
	EICRA = (EICRA & ~((1 << ISC20) | (1 << ISC21))) | (mode << ISC20);
	EIMSK |= (1 << INT2);
	break;
	case 5:
	EICRA = (EICRA & ~((1 << ISC30) | (1 << ISC31))) | (mode << ISC30);
	EIMSK |= (1 << INT3);
	break;
	case 0:
	EICRB = (EICRB & ~((1 << ISC40) | (1 << ISC41))) | (mode << ISC40);
	EIMSK |= (1 << INT4);
	break;
	case 1:
	EICRB = (EICRB & ~((1 << ISC50) | (1 << ISC51))) | (mode << ISC50);
	EIMSK |= (1 << INT5);
	break;
	case 6:
	EICRB = (EICRB & ~((1 << ISC60) | (1 << ISC61))) | (mode << ISC60);
	EIMSK |= (1 << INT6);
	break;
	case 7:
	EICRB = (EICRB & ~((1 << ISC70) | (1 << ISC71))) | (mode << ISC70);
	EIMSK |= (1 << INT7);
	break;
#else

#warning "enableINT unsupported on this cpu"
#endif
}
}

#define IOPORTS_TO_STRING(name) #name
#define IOPORTS_IRQ_HANDLER(vector, type) asm(IOPORTS_TO_STRING(vector)) __attribute__ ((type, __INTR_ATTRS))

#define  EXTERNAL_NUM_INTERRUPTS 8
typedef void (*voidFuncPtr)(void);

template<uint8_t INTNumber>
class HALINT {
static void nothing(void) {
}

public:
static voidFuncPtr intFunc;
HALINT() {
	intFunc = 0;
}

inline __attribute__((always_inline))
void enable(int mode) {
	enableINT(INTNumber, mode);
}
inline __attribute__((always_inline))
void setCB(voidFuncPtr cb) {
	intFunc = cb;

}

};

//template<uint8_t INTNumber,void callback(void)> void HALINT<INTNumber,callback>::__vector_handleINT2(void){  callback();}


#else
#error "HAL not defined for this architecture"
#endif

#endif /* HAL_HAL_INTERRUPT_H_ */
