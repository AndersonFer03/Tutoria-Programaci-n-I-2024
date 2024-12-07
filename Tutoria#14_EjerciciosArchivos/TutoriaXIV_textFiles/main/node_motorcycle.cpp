#include "node_motorcycle.h"
NodeMotorcycle::NodeMotorcycle(Motorcycle m) {
	motorcycle = m;
}
Motorcycle NodeMotorcycle::getMotorcycle() {
	return motorcycle;
}
void NodeMotorcycle::setNext(NodeMotorcycle* pNext) {
	next = pNext;
}
NodeMotorcycle* NodeMotorcycle::NodeMotorcycle::getNext() {
	return next;
}
void NodeMotorcycle::setPrev(NodeMotorcycle* pPrev) {
	prev = pPrev;
}
NodeMotorcycle* NodeMotorcycle::getPrev() {
	return prev;
}