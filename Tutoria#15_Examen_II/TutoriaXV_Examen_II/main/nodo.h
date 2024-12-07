#pragma once
#include <iostream>
#include "Post.h"
using namespace std;
class Nodo {
private:
	Nodo* next;
	Nodo* prev;
	Post value;
public:
	Nodo();
	Nodo(Post value);
	Post getValue();
	Nodo* getNext();
	Nodo* getPrev();
	void setValue(Post pValue);
	void setNext(Nodo* pNext);
	void setPrev(Nodo* pPrev);


};

