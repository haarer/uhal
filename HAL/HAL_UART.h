/*
 * HAL_UART.h
 *
 *  Created on: 24.01.2018
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
 */

#ifndef HAL_HAL_UART_H_
#define HAL_HAL_UART_H_


// ----------------------------------- UART Aspects -------------------------------------


#if defined(__AVR__)

// ---------------------------------- AVR specific ------------------------------------------
#include <avr/io.h>




#if defined(UCSRA)

class UART0 {
public:

static void WAIT_EMPTY_TX(void) {
	while (!( UCSRA & (1 << UDRE)))
		;
}

static void SET_SEND_DATA(uint8_t data) {
	UDR = data;
}
static void SET_DBL_SPEED(void) {
	UCSRA = (1 << U2X);
}

static void SET_BAUD(uint16_t rate) {
	UBRRH = (unsigned char) (rate >> 8);
	UBRRL = (unsigned char) rate;
}
static uint8_t GET_RECEIVE_DATA(void) {
	return UDR;
}
static void WAIT_RX_DATA_PRESENT(void) {
	while (!(UCSRA & (1 << RXC)))
		;
}
static void ENABLE_RXTX(void) {
	UCSRB = _BV(RXCIE) | (1 << RXEN) | (1 << TXEN);
}
static uint8_t GET_STATUS(void) {
	return (UCSRA & ( _BV(FE) | _BV(DOR)));
}
static void CLEAR_TX_COMPLETE(void) {
	UCSRA |= (1 << TXC); // cleared by writing 1+-
}
static void WAIT_FOR_TX_COMPLETE(void) {
	while (!( UCSRA & (1 << TXC)))
		;
}
};
#endif


#if defined(UCSR0A)

class UART0 {
public:

static void WAIT_EMPTY_TX(void) {
	while (!( UCSR0A & (1 << UDRE0)))
		;
}

static void SET_SEND_DATA(uint8_t data) {
	UDR0 = data;
}
static void SET_DBL_SPEED(void) {
	UCSR0A = (1 << U2X0);
}

static void SET_BAUD(uint16_t rate) {
	UBRR0H = (unsigned char) (rate >> 8);
	UBRR0L = (unsigned char) rate;
}
static uint8_t GET_RECEIVE_DATA(void) {
	return UDR0;
}
static void WAIT_RX_DATA_PRESENT(void) {
	while (!(UCSR0A & (1 << RXC0)))
		;
}
static void ENABLE_RXTX(void) {
	UCSR0B = _BV(RXCIE0) | (1 << RXEN0) | (1 << TXEN0);
}
static uint8_t GET_STATUS(void) {
	return (UCSR0A & ( _BV(FE0) | _BV(DOR0)));
}
static void CLEAR_TX_COMPLETE(void) {
	UCSR0A |= (1 << TXC0); // cleared by writing 1+-
}
static void WAIT_FOR_TX_COMPLETE(void) {
	while (!( UCSR0A & (1 << TXC0)))
		;
}
};
#endif

#if defined(UCSR3A)

class UART3
{
public:

static inline __attribute__((always_inline)) void WAIT_EMPTY_TX(void)
{
	while (!( UCSR3A & (1 << UDRE3)));
}

static inline __attribute__((always_inline)) void SET_SEND_DATA(uint8_t data)
{
	UDR3=data;
}
static inline __attribute__((always_inline)) void SET_DBL_SPEED(void)
{
	UCSR3A = (1 << U2X3);
}

static inline __attribute__((always_inline)) void SET_BAUD(uint16_t rate)
{
	UBRR3H = (unsigned char) (rate >> 8);
	UBRR3L = (unsigned char) rate;
}
static inline __attribute__((always_inline)) uint8_t GET_RECEIVE_DATA(void)
{
	return UDR3;
}
static inline __attribute__((always_inline)) void WAIT_RX_DATA_PRESENT(void)
{
	while (!(UCSR3A & (1 << RXC3)));
}
static inline __attribute__((always_inline)) void ENABLE_RXTX(void)
{
	UCSR3B = _BV(RXCIE3) | (1 << RXEN3) | (1 << TXEN3);
}
static inline __attribute__((always_inline)) uint8_t GET_STATUS(void)
{
	return (UCSR3A & ( _BV(FE3) | _BV(DOR3) ) );
}
static inline __attribute__((always_inline)) void CLEAR_TX_COMPLETE(void)
{
	UCSR3A &= (1 << TXC3);
}
static inline __attribute__((always_inline)) void WAIT_FOR_TX_COMPLETE(void)
{
	while (!( UCSR3A & (1 << TXC3)));
}
};

#endif

#else
#error "HAL not defined for this architecture"
#endif



#endif /* HAL_HAL_UART_H_ */
