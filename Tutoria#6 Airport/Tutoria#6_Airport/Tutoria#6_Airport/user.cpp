#include "user.h"

User::User() {

}
User::~User() {

}
User::User(string pName, string pPersonId, string pEmail, int pPhoneNumber, string pUsername, int totalTickets)
: Person(pName, pPersonId, pEmail, pPhoneNumber){
	this->username = username;
	this->totalTickets = totalTickets;
}
void User::bookTicket(Flight* flight) {
	string numSeat = "", code="", price="";
	flight->getAvailableSeats();
	printf("Escoge el asiento: ");
	getline(cin, numSeat);
	Seat* seat = flight->searchSeat(numSeat);
	Ticket* auxTickets = new Ticket[totalTickets];

	if (seat->getIsAvailable()) {
		printf("Digite el codigo: ");
		getline(cin, code);
		printf("Escoge el precio: ");
		getline(cin, price);

		seat->reserveSeat();
		Ticket ticket = Ticket(code, seat,stoi(price),flight->getFlightNumber());
		totalTickets++;
		auxTickets = tickets;
		tickets = new Ticket[totalTickets];
		for (int i = 0; i < totalTickets - 1;i++) {
			tickets[i] = auxTickets[i];
		}
		tickets[totalTickets - 1] = ticket;
	}
}
