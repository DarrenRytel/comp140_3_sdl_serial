#pragma once
#include <serial\serial.h>
#include <string>

using std::string;



class SerialInterface

{
public:
	SerialInterface();
	~SerialInterface();

	void send(string msg);
	void getPositions();

	int getPot1() { return pot1; };
	int getPot2() { return pot2; };

	void close();



private:
	serial::Serial* mySerial;
	bool connect = false;

	int pot1 = 0;
	int pot2 = 0;

};

