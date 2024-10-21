#pragma once
#include "node.h"

class List {
private:
	Node* header;

public:
	List() :header(nullptr) {}
	void print();
	Node* getHeader();
	void insertHeader(Course* course);
	void deleteLastNode();
	void invertList();
};
