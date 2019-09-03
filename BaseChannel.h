/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
*/

#ifndef BASECHANNEL_H_
#define BASECHANNEL_H_

// platforms any

#include <stdint.h>
#include <stddef.h>
class BaseChannel
{
public:
	BaseChannel()
	{
	};
	virtual ~BaseChannel()
	{
	};


	// transmission interface
	virtual void send(const uint8_t* p_data, size_t length) = 0;


	// reception interface

	// polling
	// returns bytes received so far (if <> requested length it was a timeout)
	virtual size_t receive(uint8_t* p_data, const size_t length, unsigned int timeout = 0) = 0;

	// tbd push notification is missing, 
	// pass pointer to such a push interface to constructor
	//virtual void push(const  uint8_t* p_data, size_t length) = 0;
	//returns 0 if no byte available, 1 if byte available and stores byte at pointer
virtual uint8_t receivebyte(uint8_t* p_data)=0;

};

#endif
