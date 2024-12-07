#pragma once
using namespace std;
#include <iostream>
template <typename T>
class List {
private:
	struct Nodo {
		T number;
		Nodo* next;
		Nodo* prev;
		Nodo(T value) : number(value), next(nullptr), prev(nullptr) {}
	};
	Nodo* header;

public:
	List() :header(nullptr) {

	}
	void print() {
		Nodo* aux = header;
		while (aux) {
			cout << aux->number << " -> ";
			aux = aux->next;
		}
	}
	//Insertar al principio de la lista
	void insertHeader(T value) {
		Nodo* newNodo = new Nodo(value);
		if (!header) {
			header = newNodo;
		}
		else {
			header->prev = newNodo;
			newNodo->next = header;
			header = newNodo;
		}
	}
	//Insertar el valor al final de la lista
	void insertFinal(T value) {
		Nodo* newNodo = new Nodo(value);
		if (!header) {
			header = newNodo;
		}
		else {
			Nodo* aux = header;
			while (aux->next) {
				aux = aux->next;
			}
			newNodo->prev = aux;
			aux->next = newNodo;
		}
	}
	void deleteList() {
		if (header) {
			while (header) {
				Nodo* aux;
				aux = header;
				header = aux->next;
				aux->prev = nullptr;
				aux->next = nullptr;
				delete aux;
			}
		}
	}


	void invert() {
		Nodo* current = header;
		Nodo* temp = nullptr;

		while (current) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;  
		}

		if (temp != nullptr) {
			header = temp->prev;
		}
	}

	void deleteNodo(List<T>::Nodo*& temp)
	{
		Nodo* aux = temp;
		temp = temp->next;
		if (aux->prev) {
			aux->prev->next = aux->next;
		}
		if (aux->next) {
			aux->next->prev = aux->prev;
		}
		aux->next=nullptr;
		aux->prev = nullptr;
		delete aux;
	}

	void removeDuplicates() {
		Nodo* current = header;
		while (current != nullptr) {
			Nodo* temp = current->next;
			while (temp != nullptr) {
				if (temp->number == current->number) {
					deleteNodo(temp);
					continue;
				}
				temp = temp->next;
			}
			current = current->next;
		}
	}

};