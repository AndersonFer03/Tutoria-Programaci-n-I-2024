#include "circularSinglyLinkedList.h"

void PhotoList::print() {
	if (header) {
		Nodo* aux = header;
		do {
			cout << aux->getValue().toString();
			aux = aux->getNext();
			cout << "-----------------------------" << endl;
		} while (aux != header);
	}
	else {
		cout << "No hay valores en la lista" << endl;
	}
}
Nodo* PhotoList::getHeader() {
	return header;
}
void PhotoList::insertHeader(Post value) {
	Nodo* newNode = new Nodo();
	newNode->setValue(value);
	if (!header) {
		header = newNode;
		header->setNext(header);
	}
	else {
		newNode->setNext(header);
		Nodo* aux = header;
		do {
			aux = aux->getNext();
		} while (aux->getNext() != header);
		aux->setNext(newNode);
		header = newNode;
	}
}
void PhotoList::deletePhotos() {
		if (!header) {
			return;
		}

		Nodo* actual = header;

		do {
			Nodo* temp = actual;
			actual = actual->getNext();
			delete temp;
		} while (actual != header);

		header = nullptr;
}


string PhotoList::countryWithMostPublications() {
	if (!header) { 
		return ""; 
	} 

	string paisMax;
	int maxPublicaciones = 0;
	Nodo* actual = header;

	
	do {
		string paisActual = actual->getValue().getPais();
		int contador = 0;
		Nodo* contadorNodo = header;
		do {
			if (contadorNodo->getValue().getPais() == paisActual) {
				contador++;
			}
			contadorNodo = contadorNodo->getNext();
		} while (contadorNodo != header);

		if (contador > maxPublicaciones) {
			maxPublicaciones = contador;
			paisMax = paisActual;
		}

		actual = actual->getNext();
	} while (actual != header);

	return paisMax;
}



