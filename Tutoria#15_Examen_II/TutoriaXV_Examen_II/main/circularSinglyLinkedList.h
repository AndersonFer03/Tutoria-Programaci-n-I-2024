#pragma once
#include <iostream>
#include "nodo.h"

class PhotoList {

private:
	Nodo* header;

public:
	PhotoList() :header(nullptr) {}
	void print();
	Nodo* getHeader();
	void insertHeader(Post value);
	void deletePhotos();
	string countryWithMostPublications();
};