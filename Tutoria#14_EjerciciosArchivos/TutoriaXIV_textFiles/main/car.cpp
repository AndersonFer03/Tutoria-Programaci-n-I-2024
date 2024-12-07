#include "car.h"

Car::Car(string pSort,string pModel, string pBrand, int pPrice, string pTransmission) : Vehicle (pSort,pModel,pBrand,pPrice), transmission(pTransmission) {

}
string Car::getTransmission() {
	return transmission;
}
void Car::setTransmission(string pTransmission) {
	transmission = pTransmission;
}
string Car::toString() {
	string line = getSort();
	line += ";";
	line += getModel();
	line += ";";
	line += getBrand();
	line += ";";
	line += std::to_string(getPrice());
	line += ";";
	line += transmission;
	line += ";";
	line += "\n";
	return line;
}