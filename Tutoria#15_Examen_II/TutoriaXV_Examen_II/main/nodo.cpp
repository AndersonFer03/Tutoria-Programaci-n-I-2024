#include "nodo.h"
Nodo::Nodo() :next(nullptr) {

}
Nodo::Nodo(Post value) :next(nullptr) {
	this->value = value;
}
Post Nodo::getValue() {
	return value;
}
Nodo* Nodo::getNext() {
	return next;
}
Nodo* Nodo::getPrev() {
	return prev;
}
void Nodo::setValue(Post pValue) {
	value = pValue;
}
void Nodo::setNext(Nodo* pNext) {
	next = pNext;
}
void Nodo::setPrev(Nodo* pPrev) {
	prev = pPrev;
}