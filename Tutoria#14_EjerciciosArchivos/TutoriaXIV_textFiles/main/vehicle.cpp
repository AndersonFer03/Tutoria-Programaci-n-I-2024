#include "vehicle.h"

Vehicle::Vehicle() {
	model = "";
	brand = "";
	price = 0;
}
Vehicle::Vehicle(string pSort,string pModel, string pBrand, int pPrice) : sort(pSort), model(pModel), brand(pBrand), price(pPrice) {}
void Vehicle::setSort(string pSort) {
	sort = pSort;
}
void Vehicle::setModel(string pModel) {
	model = pModel;
}
void Vehicle::setBrand(string pBrand) {
	brand = pBrand;
}
void Vehicle::setPrice(int pPrice) {
	price = pPrice;
}
string Vehicle::getSort() {
	return sort;
}
string Vehicle::getModel() {
	return model;
}
string Vehicle::getBrand() {
	return brand;
}
int Vehicle::getPrice() {
	return price;
}