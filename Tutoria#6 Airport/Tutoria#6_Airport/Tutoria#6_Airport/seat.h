#pragma once
#include <iostream>
using namespace std;

class Seat {
private:
	string seatNumber;
	string classType;
	bool isAvailable;

public:
	Seat();
	Seat(string seatNumber, string classType, bool isAvailable);
	~Seat();
	void reserveSeat();
	bool getIsAvailable();
	void setSeatNumber(string seatNumber);
	string getSeatNumber();


};