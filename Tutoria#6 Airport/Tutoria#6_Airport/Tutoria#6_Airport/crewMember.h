#pragma once
#include "person.h"
#include "flight.h"
class CrewMember : public Person {
private:
	string role;
	Flight* assignedFlights;
	int totalFlights;

public:
	CrewMember(string pName, string pPersonId, string pEmail, int pPhoneNumber,string role,int totalFlight);
	~CrewMember();
	void assignedFlight(Flight flight);
	void getAssignedFlights();

};