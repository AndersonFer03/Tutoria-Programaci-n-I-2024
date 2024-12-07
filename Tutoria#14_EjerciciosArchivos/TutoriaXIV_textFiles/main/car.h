#pragma once
#include "vehicle.h"
class Car : public Vehicle {
private:
	string transmission;

public:
	Car(){}
	Car(string pSort,string pModel, string pBrand, int pPrice, string pTransmission);
	string getTransmission();
	void setTransmission(string pTransmission);
	string toString();
};
