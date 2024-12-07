#include "flight.h"

Flight::Flight() {

}
Flight::Flight(string origin, string destination,string flightNumber, Aircraft* aircraft) {
	this->origin = origin;
	this->destination = destination;
	this->flightNumber = flightNumber;
	this->aircraft = aircraft;
	char letter = 65;
	string seatNumber = "";
	seats = new Seat*[aircraft->getCapacity()];
	for (int i = 0; i < aircraft->getCapacity(); i++) {
		seats[i] = new Seat [aircraft->getCapacity()];
		for (int j = 0; j < aircraft->getCapacity(); j++) {
			seatNumber = string(1, letter) + "-" + to_string(j);
			seats[i][j].setSeatNumber(seatNumber);
		}
		letter+=1;
	}
}
Flight::~Flight() {


}
void Flight::getAvailableSeats() {
	cout << "--- Asientos: ---" << endl;
	for (int i = 0; i < aircraft->getCapacity(); i++) {
		for (int j = 0; j < aircraft->getCapacity(); j++) {
			cout << " | " << seats[i][j].getSeatNumber() <<"  "<< (seats[i][j].getIsAvailable() ? " D " : " O ") << " | \t";
		}
		cout << endl;
	}
}
void Flight::assignAircraft(Aircraft* aircraft) {
	this->aircraft = aircraft;
}
void Flight::toString() {
	cout << "Numero de vuelo: " << flightNumber << "\n"
		<< "Origen: " << origin << "\n"
		<< "Destino: " << destination << "\n"
		<< "----------------------------------" << "\n\n";
}
string Flight::getFlightNumber() {
	return flightNumber;
}
Aircraft* Flight::getAircraft() {
	return aircraft;
}

Seat* Flight::searchSeat(string seat) {
	for (int i = 0; i < aircraft->getCapacity();i++) {
		for (int j = 0; j < aircraft->getCapacity();j++) {
			if (seat == seats[i][j].getSeatNumber()) {
				return &seats[i][j];
			}
		}
	}
}