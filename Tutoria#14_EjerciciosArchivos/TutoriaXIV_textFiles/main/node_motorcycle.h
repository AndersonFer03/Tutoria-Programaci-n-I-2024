#pragma once
#include "motorcycle.h"
class NodeMotorcycle {
private:
	Motorcycle motorcycle;
	NodeMotorcycle* next;
	NodeMotorcycle* prev;
public:
	NodeMotorcycle() {}
	NodeMotorcycle(Motorcycle m);
	Motorcycle getMotorcycle();
	void setNext(NodeMotorcycle* pNext);
	NodeMotorcycle* getNext();
	void setPrev(NodeMotorcycle* pPrev);
	NodeMotorcycle* getPrev();
};
