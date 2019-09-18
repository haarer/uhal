
/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
*/

// platforms avr
//
// 
// template based UART and UART Channel Classes. inspired by peter fleurys uart library
//
// tbd - remove rest of macros and make all to inline functions

#if ( defined  (__AVR_ATtiny2313__) || defined (__AVR_ATtiny4313__) || \
	  defined (__AVR_ATmega32__) || \
	  defined( __AVR_ATmega168__) || defined( __AVR_ATmega168PA__) || defined( __AVR_ATmega168A__) ||\
	  defined(__AVR_ATmega328P__) || defined(__AVR_ATmega328__) ||\
	  defined( __AVR_ATmega2560__) )
#else	
#error "UNSUPPORTED PLATFORM"
#endif

#include "BaseChannel.h"

extern "C" {
#include <stdint.h>
#include <stdio.h>
#include <ctype.h>

#include <math.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
}

//--------------------------------------------------------------------------------------

/*
 static char rx_buf[16];
 static uint8_t rx_idx = 0;
 */
#ifndef UART_RX_BUFFER_SIZE
#define UART_RX_BUFFER_SIZE 32
#endif 

#define UART_FRAME_ERROR      0x1000              /* Framing Error by UART       */
#define UART_OVERRUN_ERROR    0x0800              /* Overrun condition by UART   */
#define UART_PARITY_ERROR     0x0400              /* Parity Error by UART        */
#define UART_BUFFER_OVERFLOW  0x0200              /* receive ringbuffer overflow */
#define UART_NO_DATA          0x0100              /* no receive data available   */
/* test if the size of the circular buffers fits into SRAM */
#if ( (UART_RX_BUFFER_SIZE) >= (RAMEND-0x60 ) )
#error "size of UART_RX_BUFFER_SIZE + UART_TX_BUFFER_SIZE larger than size of SRAM"
#endif

#define UART_RX_BUFFER_MASK ( UART_RX_BUFFER_SIZE - 1)

#if ( UART_RX_BUFFER_SIZE & UART_RX_BUFFER_MASK )
#error RX buffer size is not a power of 2
#endif



#define UART_BAUD_SELECT(baudRate,xtalCpu)  (((xtalCpu) + 8UL * (baudRate)) / (16UL * (baudRate)) -1UL)

//-------PLATFORM SPECIFIC MACROS --------------------------------------------------------------------

#if ( defined( __AVR_ATtiny2313__) || defined(__AVR_ATtiny4313__) )

#define UART_WAIT_EMPTY_TX(__dummy) while (!( UCSRA & (1 << UDRE))){}
#define UART_SET_SEND_DATA(__data) UDR = (__data)
#define UART_GET_RECEIVE_DATA(__dummy) UDR
#define UART_WAIT_RX_DATA_PRESENT(__dummy) while (!(UCSRA & (1 << RXC))){}
#define UART_SET_DBL_SPEED(__dummy) UCSRA = (1 << U2X)
#define UART_SET_BAUD(__rate) UBRRH = (unsigned char) (__rate >> 8); UBRRL = (unsigned char) __rate
#define UART_ENABLE_RXTX(__dummy) UCSRB = _BV(RXCIE) | (1 << RXEN) | (1 << TXEN)
#define UART_GET_STATUS(__dummy) (UCSRA & ( _BV(FE) | _BV(DOR) ) )
#define UART_CLEAR_TX_COMPLETE(__dummy)	UCSRA &= (1 << TXC)
#define UART_WAIT_TX_COMPLETE(__dummy)while (!( UCSRA & (1 << TXC))){}

#else

/* this is going to disappear into the hal

*/
#endif




template<class UARTClass>
class UARTChannel: public BaseChannel {
private:
	 unsigned char UART_RxBuf[UART_RX_BUFFER_SIZE];
	 unsigned char UART_RxHead;
	 unsigned char UART_RxTail;
	 unsigned char UART_LastRxError;



	uint32_t last_byte_time;

	//fixme: this should be the message size determined by a header, but we use ascii and 0x0d termination
	//uint8_t msgsize = sizeof(rx_buf) - 1;

	uint32_t timeout = 1000; //ms
	// receive and transmit

	UARTChannel();


protected:
	inline __attribute__((always_inline))
	void Transmit(uint8_t data) {
		/* Wait for empty transmit buffer */

			UARTClass::WAIT_EMPTY_TX();
			UARTClass::SET_SEND_DATA(data);

		/* Put data into buffer, sends the data */
	}

public:
	uint32_t m_rate;
	UARTChannel(uint32_t rate = 57600) :
			last_byte_time(0), m_rate(rate) {
		UART_RxHead = 0;
		UART_RxTail = 0;
		UART_LastRxError=0;


		uint32_t baud_reg_value = UART_BAUD_SELECT(rate, F_CPU);
		/* Set baud rate */
		if (baud_reg_value & 0x8000) {

			UARTClass::SET_DBL_SPEED();

			baud_reg_value &= ~0x8000;
		}

		UARTClass::SET_BAUD(baud_reg_value);
		UARTClass::ENABLE_RXTX();


	//
	}
	;
	virtual ~UARTChannel() {
	}
	;



	void rxInterrupt(void)
	{
		unsigned char tmphead;
		unsigned char data;

		unsigned char lastRxError;

		/* read UART status register and UART data register */
		lastRxError = UARTClass::GET_STATUS();
		data = UARTClass::GET_RECEIVE_DATA();

		/* calculate buffer index */
		tmphead = (UART_RxHead + 1) & UART_RX_BUFFER_MASK;

		if (tmphead == UART_RxTail) {
			/* error: receive buffer overflow */
			lastRxError = UART_BUFFER_OVERFLOW >> 8;
		} else {
			/* store new index */
			UART_RxHead = tmphead;
			/* store received data in buffer */
			UART_RxBuf[tmphead] = data;
		}
		UART_LastRxError |= lastRxError;
	}


	void send(const uint8_t* p_data, size_t length) {

		while (length != 0) {
			Transmit(*p_data);
			length--;
			p_data++;
		}
	}

	//is called from receive to retrieve current time
	unsigned int tick(void) {
		return 0;
	}

	// is called from receive frequently while waiting for bytes or timeout
	void idle(void) {

	}

	unsigned char Usync_getc(void) {
		/* Wait for data to be received */
		UARTClass::WAIT_RX_DATA_PRESENT();

		/* Get and return received data from buffer */
		return UARTClass::GET_RECEIVE_DATA();
	}


	unsigned int getc(void) {
		unsigned char tmptail;
		unsigned char data;

		if (UART_RxHead == UART_RxTail) {
			return UART_NO_DATA; /* no data available */
		}

		/* calculate /store buffer index */
		tmptail = (UART_RxTail + 1) & UART_RX_BUFFER_MASK;
		UART_RxTail = tmptail;

		/* get data from receive buffer */
		data = UART_RxBuf[tmptail];

		data = (UART_LastRxError << 8) + data;
		UART_LastRxError = 0;
		return data;
	}

	//returns 0 if no byte available, 1 if byte available and stores byte at pointer
	uint8_t receivebyte(uint8_t* p_data) {
		uint16_t rxbyte_and_status;
		rxbyte_and_status = getc();
		if (rxbyte_and_status == UART_NO_DATA) {
			return 0;
		} else {
			*p_data = rxbyte_and_status & 0xff;
			return 1;
		}
	}

	//synchronous with time out
	size_t receive(uint8_t* p_data, size_t length, unsigned int timeout = 0) {

		uint16_t rxbyte_and_status;
		uint8_t rx_idx = 0;
		unsigned int last_byte_time = 0;

		while (1) {
			rxbyte_and_status = getc();
			if (rxbyte_and_status == UART_NO_DATA) {

				// if message still not complete and timeout
				if ((rx_idx < length) && (tick() > last_byte_time + timeout)) {
					// return what we got so far
					return rx_idx;
				} else {
					// no time out just idle a bit and retry
					idle();
				}

				// yeah there is a byte
			} else {
				//store last received byte
				last_byte_time = tick();

				// just store
				*p_data = rxbyte_and_status & 0xff;
				p_data++;

				// check for complete
				if (rx_idx == length) {
					return rx_idx;
				}
			}
		}	//while(1)
	}

	
};

template<class UARTClass, void onFunc(void), void offFunc(void)>
class RS485Channel: public UARTChannel<UARTClass> {
public:
	RS485Channel(uint32_t rate = 57600) :
			UARTChannel<UARTClass>( rate) {
	}

	virtual ~RS485Channel() {
	}
	void send(const uint8_t* p_data, size_t length) {

		//clear txcomplete

		onFunc();
		while (length != 0) {

			UARTClass::CLEAR_TX_COMPLETE();
			UARTClass::WAIT_EMPTY_TX();
			UARTClass::SET_SEND_DATA(*p_data);
			UARTClass::WAIT_FOR_TX_COMPLETE();

			length--;
			p_data++;
		}

		_delay_us(500); //8 bits delay @ 57600 * 3 = 432 us
		offFunc();

	}
};

class StdIOChannel {
	static BaseChannel* bc;
	static int _putchar(char c, FILE *stream) {
		bc->send((uint8_t*) &c, 1);
		return 0;
	}

	static int _getchar(FILE *stream) {
		uint8_t c;
		if (bc->receivebyte((uint8_t*) &c) == 1)
		{
			//bc->send((uint8_t*) &c, 1);
			return c;
		}
		else
		{
			return _FDEV_EOF;
		}
	}

public:
	StdIOChannel(BaseChannel* _bc, FILE& _stdoutref) {
		bc = _bc;
		_stdoutref.put = _putchar;
		_stdoutref.get = _getchar;
		_stdoutref.flags = _FDEV_SETUP_RW;
		_stdoutref.udata = 0;

		stdout = stdin = &_stdoutref;
	}

};
