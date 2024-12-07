#include "ticket.h"

Ticket::Ticket() {}
Ticket::~Ticket() {}
Ticket::Ticket(string ticketId, Seat* seat, double price, string flightNumber) {
	this->ticketId = ticketId;
	this->seat = seat;
	this->price = price;
	this->flightNumber = flightNumber;
}
void Ticket::getTicketDetails() {
	cout << "Numero de Tiquete: " << ticketId << "\t"
		<< "Asiento: " << seat->getSeatNumber() << "\t"
		<< "Precio: " << price << "\t"
		<< "Numero de vuelo: " << flightNumber << "\n";
}