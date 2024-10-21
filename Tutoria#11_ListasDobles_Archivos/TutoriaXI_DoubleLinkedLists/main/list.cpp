#include "list.h"
void List::print() {
	Nodo* aux = header;
	while (aux) {
		cout << aux->getValue() << " -> ";
		aux = aux->getNext();
	}
}
Nodo* List::getHeader() {
	return header;
}
//Insertar al principio de la lista
void List::insertHeader(int value) {
	Nodo* newNodo = new Nodo();
	newNodo->setValue(value);
	if (!header) {
		header = newNodo;
		return;
	}
	header->setPrev(newNodo);
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
	newNodo->setPrev(aux);
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
			aux->setPrev(nullptr);
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
	if (!aux->getNext()) {
		aux->getPrev()->setNext(nullptr);
		aux->setPrev(nullptr);
		delete aux;
		return;
	}
	aux->getPrev()->setNext(aux->getNext());
	aux->getNext()->setPrev(aux->getPrev());
	aux->setNext(nullptr);
	aux->setPrev(nullptr);
	delete aux;
}
bool List::searchNumber(Nodo*& aux, int value)
{
	if (aux->getValue() == value) {
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
		header->setPrev(nullptr);
		aux->setNext(nullptr);
		delete aux;
		return;
	}
	while (aux && !flag) {
		flag = searchNumber(aux, value);
	}
	verifyNodo(flag, aux);
}
