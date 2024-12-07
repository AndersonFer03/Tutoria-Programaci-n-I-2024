#pragma once
#include "car.h"
class NodeCar {
private:
	Car car;
	NodeCar* next;
	NodeCar* prev;
public:
	NodeCar() {}
	NodeCar(Car c);
	Car getCar();
	void setNext(NodeCar* pNext);
	NodeCar* getNext();
	void setPrev(NodeCar* pPrev);
	NodeCar* getPrev();
};
