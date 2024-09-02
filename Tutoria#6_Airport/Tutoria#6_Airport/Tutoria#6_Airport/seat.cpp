#include "seat.h"

Seat::Seat() {
	seatNumber="";
	classType="";
	isAvailable=true;
}
Seat::Seat(string seatNumber, string classType, bool isAvailable) {
	this->seatNumber = seatNumber;
	this->classType = classType;
	this->isAvailable = isAvailable;
}
Seat::~Seat() {

}
void Seat::reserveSeat() {
	this->isAvailable = false;
}
void Seat::setSeatNumber(string seatNumber) {
	this->seatNumber = seatNumber;
}
string Seat::getSeatNumber() {
	return seatNumber;
}
bool Seat::getIsAvailable() {
	return isAvailable;
}