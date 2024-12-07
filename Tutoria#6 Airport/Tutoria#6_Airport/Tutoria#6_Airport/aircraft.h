#pragma once
#include <iostream>
#include <string>
using namespace std;

class Aircraft {
private:
	string aircraftId;
	string model;
	int capacity;

public:
	Aircraft();
	Aircraft(string pAircraftId,string pModel, int pCapacity);
	~Aircraft();
	string getDetails();
	int getCapacity();

};