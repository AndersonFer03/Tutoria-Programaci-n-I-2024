#include "crewMember.h"

CrewMember::CrewMember(string pName, string pPersonId, string pEmail, int pPhoneNumber,string role, int totalFlight) 
: Person(pName, pPersonId, pEmail, pPhoneNumber) {
	this->role = role;
	this->totalFlights = totalFlight;
}
CrewMember::~CrewMember() {

}
void CrewMember::assignedFlight(Flight flight) {
	Flight* auxFlights = new Flight[totalFlights];
	totalFlights+=1;
	auxFlights = assignedFlights;
	assignedFlights = new Flight[totalFlights];
	for (int i = 0; i < totalFlights - 1;i++) {
		assignedFlights[i] = auxFlights[i];
	}
	assignedFlights[totalFlights - 1] = flight;
}
void CrewMember::getAssignedFlights() {
	cout << "Vuelos Asignados:\n\n";
	for (int i = 0; i < totalFlights;i++) {
		assignedFlights[i].toString();
	}
}