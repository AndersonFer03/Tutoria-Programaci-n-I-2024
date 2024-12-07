#include "node_car.h"
NodeCar::NodeCar(Car c) {
	car = c;
}
Car NodeCar::getCar() {
	return car;
}
void NodeCar::setNext(NodeCar* pNext) {
	next = pNext;
}
NodeCar* NodeCar::getNext() {
	return next;
}
void NodeCar::setPrev(NodeCar* pPrev) {
	prev = pPrev;
}
NodeCar* NodeCar::getPrev() {
	return prev;
}