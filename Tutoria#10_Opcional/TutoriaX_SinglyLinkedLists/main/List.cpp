#include "list.h"
void List::print() {
	Nodo* aux = header;
	while (aux) {
		cout << aux->getValue() << " -> ";
		aux = aux->getNext();
	}
}
//Insertar al principio de la lista
void List::insertHeader(int value) {
	Nodo* newNodo = new Nodo();
	newNodo->setValue(value);
	if (!header) {
		header = newNodo;
		return;
	}
	newNodo->setNext(header);
	header = newNodo;
}
//Insertar el valor al final de la lista
void List::insertFinal(int value) {
	Nodo* newNodo = new Nodo();
	newNodo->setValue(value);
	if (!header) {
		header = newNodo;
		return;
	}
	Nodo* aux = header;
	while (aux->getNext()) {
		aux = aux->getNext();
	}
	aux->setNext(newNodo);
}
//Borrar lista
void List::deleteList() {
	if (header) {
		Nodo* aux;
		while (header) {
			aux = new Nodo();
			aux = header;
			header = aux->getNext();
			aux->setNext(nullptr);
			delete aux;
		}
	}
}
//Verifica el nodo para ubicar el que debe eliminar
void List::verifyNodo(bool flag, Nodo* aux)
{
	if (flag == false) {
		cout << "El valor no fue encontrado" << endl;
		return;
	}
	Nodo* nodo = aux->getNext();
	if (!nodo->getNext()) {
		aux->setNext(nullptr);
		delete nodo;
		return;
	}
	aux->setNext(nodo->getNext());
	nodo->setNext(nullptr);
	delete nodo;
}
bool List::searchNumber(Nodo*& aux, int value)
{
	if (aux->getNext()->getValue() == value) {
		return true;
	}
	aux = aux->getNext();
	return false;
}
//Eliminar el valor como parametro
void List::deleteNodo(int value) {
	Nodo* aux = header;
	bool flag = false;
	if (header->getValue() == value) {
		header = aux->getNext();
		aux->setNext(nullptr);
		delete aux;
		return;
	}
	while (aux->getNext() && !flag) {
		flag = searchNumber(aux, value);
	}
	verifyNodo(flag, aux);
}
//Insertar Ordenado en la lista
void List::orderNodo(bool flag, Nodo* aux, Nodo* newNodo)
{
	if (!flag) {
		aux->setNext(newNodo);
		return;
	}
	newNodo->setNext(aux->getNext());
	aux->setNext(newNodo);
}
bool List::compareValue(Nodo*& aux, int value) {
	if (aux->getNext()->getValue() > value) {
		return true;
	}
	aux = aux->getNext();
	return false;

}
void List::insertOrdered(int value) {
	Nodo* newNodo = new Nodo();
	newNodo->setValue(value);
	if (!header) {
		header = newNodo;
		return;
	}
	if (value < header->getValue()) {
		newNodo->setNext(header);
		header = newNodo;
		return;
	}
	Nodo* aux = header;
	bool flag = false;
	while (aux->getNext() && !flag) {
		flag = compareValue(aux, value);
	}
	orderNodo(flag, aux, newNodo);
}