
/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
*/

#pragma once

// platforms any (where boost is available)


#include "BaseChannel.h"

#include <boost/asio.hpp>
#include <boost/array.hpp>
using namespace boost::asio;

class TCPBoostChannel :
	public BaseChannel
{
private:
	boost::asio::io_service m_io_service;
	ip::tcp::endpoint m_endpoint;

	ip::tcp::socket m_socket;

	TCPBoostChannel();

public:
	TCPBoostChannel(const char* ip, unsigned int port) :m_endpoint(ip::address::from_string(ip), port), m_socket(m_io_service)
	{
		m_socket.open(ip::tcp::v4());
		m_socket.connect(m_endpoint);
	};
	~TCPBoostChannel(){  };
	void send(const uint8_t* data, size_t length)
	{
		m_socket.send(boost::asio::buffer(data, length));
	};
	size_t receive(uint8_t* p_data, const size_t length, unsigned int timeout = 0)
	{
		return m_socket.receive(buffer(p_data, length));
	};

};

