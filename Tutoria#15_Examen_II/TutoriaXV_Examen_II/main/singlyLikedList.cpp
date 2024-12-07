#include "singlyLinkedList.h"
void TextList::print() {
	Nodo* aux = header;
	while (aux) {
		cout << aux->getValue().toString();
		cout << "-----------------------------" << endl;
		aux = aux->getNext();
	}
}
//Insertar al principio de la lista
void TextList::insertHeader(Post value) {
	Nodo* newNodo = new Nodo();
	newNodo->setValue(value);
	if (!header) {
		header = newNodo;
		return;
	}
	newNodo->setNext(header);
	header = newNodo;
}
//Insertar Ordenado en la lista
void TextList::orderNodo(bool flag, Nodo* aux, Nodo* newNodo)
{
	if (!flag) {
		aux->setNext(newNodo);
		return;
	}
	newNodo->setNext(aux->getNext());
	aux->setNext(newNodo);
}
bool TextList::compareValue(Nodo*& aux, Post value) {
	if (aux->getNext()->getValue().getTiempoPublicacion() > value.getTiempoPublicacion()) {
		return true;
	}
	aux = aux->getNext();
	return false;

}
void TextList::insertOrdered(Post value) {
	Nodo* newNodo = new Nodo();
	newNodo->setValue(value);
	if (!header) {
		header = newNodo;
		return;
	}
	if (value.getTiempoPublicacion() < header->getValue().getTiempoPublicacion()) {
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


void TextList::deleteSelectedPosts(string* titulos, int tamano) {
	for (int i = 0; i < tamano; ++i) {
		string tituloBuscado = titulos[i];
		Nodo* actual = header;
		Nodo* anterior = nullptr;

		while (actual) {
			if (actual->getValue().getTitulo() == tituloBuscado) {
				if (actual == header) {
					header = actual->getNext();
					delete actual;
					actual = header;
				}
				else {
					anterior->setNext(actual->getNext());
					delete actual;
					actual = anterior->getNext();
				}
			}
			else {
				anterior = actual;
				actual = actual->getNext();
			}
		}
	}
}
