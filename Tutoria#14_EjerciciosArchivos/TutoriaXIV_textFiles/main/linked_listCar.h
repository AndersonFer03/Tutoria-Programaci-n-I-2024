#pragma once
#include "node_car.h"

class LinkedListCar {
private:
	NodeCar* header;
	NodeCar* last;
public:
	LinkedListCar() { header = last = NULL; }
	void insert(Car pCar);
	void print();
	int countCar();
	string* createTextList();
	void loadTextList(string* list, int listSize);

};