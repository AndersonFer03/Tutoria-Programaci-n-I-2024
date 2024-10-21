#pragma once
#include <iostream>
#include "nodo.h"
class List {
private:
	Nodo* header;
public:
	List() :header(nullptr) {}
	void print();
	Nodo* getHeader();
	void insertHeader(int value);
	void insertFinal(int value);
	void deleteList();
	void verifyNodo(bool flag, Nodo* aux);
	bool searchNumber(Nodo*& aux, int value);
	void deleteNodo(int value);
};