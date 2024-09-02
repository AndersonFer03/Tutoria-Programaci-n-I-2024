#include "aircraft.h"

Aircraft::Aircraft() {

}
Aircraft::Aircraft(string pAircraftId, string pModel, int pCapacity) {
	aircraftId = pAircraftId;
	model = pModel;
	capacity = pCapacity;
}
Aircraft::~Aircraft() {

}
string Aircraft::getDetails() {
	return "Codigo de avion: " + aircraftId + "\n Modelo: " + model + "\n Capacidad: " + to_string(capacity);


}

int Aircraft::getCapacity() {
	return capacity;
}