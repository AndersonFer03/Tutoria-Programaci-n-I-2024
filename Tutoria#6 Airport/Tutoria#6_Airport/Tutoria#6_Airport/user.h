#pragma once
#include "person.h"
#include "flight.h"
#include "ticket.h"
class User : public Person {

private:
	string username;
	Ticket* tickets;
	int totalTickets;
public:
	User();
	~User();
	User(string pName, string pPersonId, string pEmail, int pPhoneNumber, string pUsername, int totalTickets);
	void bookTicket(Flight* flight);


};