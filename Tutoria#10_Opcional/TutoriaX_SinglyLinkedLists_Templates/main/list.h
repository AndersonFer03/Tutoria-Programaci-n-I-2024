#pragma once
using namespace std;

#include <iostream> 
template <typename T>
class List {
private:
	struct Nodo {
		T number;
		Nodo* next;
		Nodo(T value) : number(value), next(nullptr) {}
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
			aux->next = newNodo;
		}
	}
	void deleteList() {
		if (header) {
			while (header) {
				Nodo* aux;
				aux = header;
				header = aux->next;
				aux->next=nullptr;
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
		Nodo* nodo = aux->next;
		if (!nodo->next) {
			aux->next = nullptr;
			delete nodo;
		}
		else {
			aux->next = nodo->next;
			nodo->next = nullptr;
			delete nodo;
		}
	}
	//Eliminar el valor como parametro
	void eliminateNodo(T value) {
		Nodo* aux = header;
		bool flag = false;
		if (header->number == value) {
			header = aux->next;
			aux->next = nullptr;
			delete aux;
		}
		else {
			while (aux->next && !flag) {
				if (aux->next->number == value) {
					flag = true;
				}
				else {
					aux = aux->next;
				}
			}
			verifyNodo(flag, aux);
		}
	}
	//Insertar Ordenado en la lista
	void insertOrdered(T value) {
		Nodo* newNodo = new Nodo(value);
		if (!header) {
			header = newNodo;
		}
		else {
			if (value < header->number) {
				newNodo->next = header;
				header = newNodo;
			}
			else {
				Nodo* aux = header;
				bool flag = false;
				while (aux->next && !flag) {
					if (aux->next->number > value) {
						flag = true;
					}
					else {
						aux = aux->next;
					}
				}
				if (!flag) {
					aux->next = newNodo;
				}
				else {
					newNodo->next = aux->next;
					aux->next = newNodo;
				}
			}
		}

	}
};