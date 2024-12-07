#pragma once
#include "vehicle.h"
class Motorcycle : public Vehicle {
private:
	string type;

public:
	Motorcycle(){}
	Motorcycle(string pSort,string pModel, string pBrand, int pPrice, string pType);
	string getType();
	void setType(string pType);
	string toString();
};