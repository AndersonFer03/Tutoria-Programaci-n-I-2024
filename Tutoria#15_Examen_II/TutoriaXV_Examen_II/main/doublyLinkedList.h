#pragma once
#include <iostream>
#include "nodo.h"
class VideosList {
private:
	Nodo* header;
public:
	VideosList() :header(nullptr) {}
	void print();
	Nodo* getHeader();
	void insertFinal(Post value);
	void deleteList();
	void showPublication(string titulo);
};