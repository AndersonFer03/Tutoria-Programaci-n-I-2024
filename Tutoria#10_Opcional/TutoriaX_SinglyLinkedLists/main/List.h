#pragma once
#include <iostream>
#include "nodo.h"
class List {
private:
	Nodo* header;
public:
	List() :header(nullptr) {}
	void print();
	void insertHeader(int value);
	void insertFinal(int value);
	void deleteList();
	void verifyNodo(bool flag, Nodo* aux);
	bool searchNumber(Nodo*& aux, int value);
	void deleteNodo(int value);
	void orderNodo(bool flag, Nodo* aux, Nodo* newNodo);
	bool compareValue(Nodo*& aux, int value);
	void insertOrdered(int value);
};