#pragma once
#include <iostream>
using namespace std;
class Nodo {
private:
	Nodo* next;
	int value;
public:
	Nodo();
	int getValue();
	Nodo* getNext();
	void setValue(int pValue);
	void setNext(Nodo* pNext);

};
