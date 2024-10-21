#include "nodo.h"
Nodo::Nodo() :next(nullptr) {

}

int Nodo::getValue() {
	return value;
}
Nodo* Nodo::getNext() {
	return next;
}
void Nodo::setValue(int pValue) {
	value = pValue;
}
void Nodo::setNext(Nodo* pNext) {
	next = pNext;
}
