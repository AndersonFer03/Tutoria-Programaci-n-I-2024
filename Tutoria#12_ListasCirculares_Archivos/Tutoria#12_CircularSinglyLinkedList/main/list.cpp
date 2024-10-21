#include "List.h"

void List::print() {
	if (header) {
		Node* aux = header;
		do {
			cout << aux->getCourse()->toString();
			aux = aux->getNext();
		} while (aux != header);
	}
	else {
		cout << "No hay valores en la lista" << endl;
	}
}
Node* List::getHeader() {
	return header;
}
void List::insertHeader(Course* course) {
	Node* newNode = new Node();
	newNode->setCourse(course);
	if (!header) {
		header = newNode;
		header->setNext(header);
	}
	else {
		newNode->setNext(header);
		Node* aux = header;
		do {
			aux = aux->getNext();
		} while (aux->getNext() != header);
		aux->setNext(newNode);
		header = newNode;
	}
}

void List::deleteLastNode() {

	Node* aux = header;
	do {
		aux = aux->getNext();
	} while (aux->getNext()->getNext() != header);
	Node* lastNode = aux->getNext();
	aux->setNext(lastNode->getNext());
	lastNode->setNext(NULL);
	delete lastNode;
}
void List::invertList() {
	if (header) {
		Node* prev = nullptr;
		Node* current = header;
		Node* next = nullptr;

		do {
			next = current->getNext(); 
			current->setNext(prev);    
			prev = current;            
			current = next;           
		} while (current != header);   
		header->setNext(prev);       
		return;
	}
	cout << "No hay valores en la lista" << endl;
}
