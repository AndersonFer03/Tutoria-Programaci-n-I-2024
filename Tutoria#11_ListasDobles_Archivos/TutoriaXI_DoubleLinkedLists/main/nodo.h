#pragma once
#include <iostream>
using namespace std;
class Nodo {
private:
	Nodo* next;
	Nodo* prev;
	int value;
public:
	Nodo();
	int getValue();
	Nodo* getNext();
	Nodo* getPrev();
	void setValue(int pValue);
	void setNext(Nodo* pNext);
	void setPrev(Nodo* pPrev);


};

