#pragma once
#include <iostream>
#include "nodo.h"
class TextList {
private:
	Nodo* header;
public:
	TextList() :header(nullptr) {}
	void print();
	void insertHeader(Post value);
	void orderNodo(bool flag, Nodo* aux, Nodo* newNodo);
	bool compareValue(Nodo*& aux, Post value);
	void insertOrdered(Post value);
	void deleteSelectedPosts(string* titulos, int tamano);

};