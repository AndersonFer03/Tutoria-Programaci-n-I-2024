#pragma once
#include <iostream>
#include "seat.h"
using namespace std;

class Ticket {

private:
	string ticketId;
	Seat* seat;
	double price;
	string flightNumber;
public:
	Ticket();
	~Ticket();
	Ticket(string ticketId, Seat* seat, double price, string flightNumber);
	void getTicketDetails();


};