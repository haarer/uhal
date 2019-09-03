
/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
*/
#pragma once

// platforms any (where boost is available)

#include "BaseChannel.h"

#include <boost/asio.hpp>
#include <boost/array.hpp>
using namespace boost::asio;

class UDPBoostChannel :
	public BaseChannel
{
private:
	boost::asio::io_service m_io_service;
	ip::udp::endpoint m_endpoint;

	ip::udp::socket m_socket;

	UDPBoostChannel();

public:
	UDPBoostChannel(const char* ip, unsigned int port) :m_endpoint(ip::address::from_string(ip), port), m_socket(m_io_service)
	{
		m_socket.open(ip::udp::v4());
	};
	~UDPBoostChannel(){  };
	void send(const uint8_t* data, size_t length)
	{
		m_socket.send_to(boost::asio::buffer(data,length), m_endpoint);
	};

	size_t receive(uint8_t* p_data, const size_t length, unsigned int timeout = 0)
	{
		return length;
	};

};

