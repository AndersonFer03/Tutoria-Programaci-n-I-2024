#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehicle {
private:
	string sort;
	string model;
	string brand;
	int price;

public:
	Vehicle();
	Vehicle(string pSort, string pModel, string pBrand, int pPrice);
	void setSort(string pSort);
	void setModel(string pModel);
	void setBrand(string pBrand);
	void setPrice(int pPrice);
	string getSort();
	string getModel();
	string getBrand();
	int getPrice();
	virtual string toString() = 0;
};