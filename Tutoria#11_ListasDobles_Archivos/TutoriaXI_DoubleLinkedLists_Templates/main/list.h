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
	//Verifica el nodo para ubicar el que debe eliminar
	void verifyNodo(bool flag, List<T>::Nodo* aux)
	{
		if (flag == false) {
			cout << "El valor no fue encontrado" << endl;
			return;
		}
		if (!aux->next) {
			aux->prev->next = nullptr;
			aux->prev = nullptr;
			delete aux;
		}
		else {
			aux->prev->next = aux->next;
			aux->next->prev = aux->prev;
			aux->next = nullptr;
			aux->prev = nullptr;
			delete aux;
		}
	}
	//Eliminar el valor como parametro
	void eliminateNodo(T value) {
		Nodo* aux = header;
		bool flag = false;
		if (header->number == value) {
			header = aux->next;
			header->prev = nullptr;
			aux->next = nullptr;
			delete aux;
			return;
		}

		while (aux && !flag) {
			if (aux->number == value) {
				flag = true;
				continue;
			}
			aux = aux->next;
		}
		verifyNodo(flag, aux);
	}

};