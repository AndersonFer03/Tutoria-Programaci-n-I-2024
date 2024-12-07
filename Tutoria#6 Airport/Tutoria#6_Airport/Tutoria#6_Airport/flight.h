#pragma once
#include <iostream>
#include "aircraft.h"
#include "seat.h"
using namespace std;
class Flight {
private:
	string flightNumber;
	Aircraft* aircraft;
	string origin;
	string destination;
	Seat** seats;

public:
	Flight();
	Flight(string origin,string destination,string flightNumber, Aircraft* aircraft);
	~Flight();
	void getAvailableSeats();
	void assignAircraft(Aircraft* aircraft);
	void toString();
	string getFlightNumber();
	Aircraft* getAircraft();
	Seat* searchSeat(string seat);

};