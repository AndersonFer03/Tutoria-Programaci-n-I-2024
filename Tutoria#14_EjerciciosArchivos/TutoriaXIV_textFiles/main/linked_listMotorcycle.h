#pragma once
#include "node_motorcycle.h"

class LinkedListMotorcycle {
private:
	NodeMotorcycle* header;
	NodeMotorcycle* last;
public:
	LinkedListMotorcycle() { header = last = NULL; }
	void insert(Motorcycle pMotorcycle);
	void print();
	int countMotorcycle();
	string* createTextList();

};
