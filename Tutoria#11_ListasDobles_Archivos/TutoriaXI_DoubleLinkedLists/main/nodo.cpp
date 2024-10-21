#include "nodo.h"
Nodo::Nodo() :next(nullptr) {

}

int Nodo::getValue() {
	return value;
}
Nodo* Nodo::getNext() {
	return next;
}
Nodo* Nodo::getPrev() {
	return prev;
}
void Nodo::setValue(int pValue) {
	value = pValue;
}
void Nodo::setNext(Nodo* pNext) {
	next = pNext;
}
void Nodo::setPrev(Nodo* pPrev) {
	prev = pPrev;
}