#include "doublyLinkedList.h"

void VideosList::print() {
	Nodo* aux = header;
	while (aux) {
		cout << aux->getValue().toString();
		cout << "-----------------------------"<<endl;
		aux = aux->getNext();
	}
}
Nodo* VideosList::getHeader() {
	return header;
}
//Insertar el valor al final de la lista
void VideosList::insertFinal(Post value) {
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
void VideosList::deleteList() {
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
void VideosList::showPublication(string titulo) {
    Nodo* temp = header;
    while (temp) {
        if (temp->getValue().getTitulo() == titulo) {
			temp->getValue().toString();
            return;
        }
        temp = temp->getNext();
    }
}