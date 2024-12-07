#include "motorcycle.h"

Motorcycle::Motorcycle(string pSort,string pModel, string pBrand, int pPrice, string pType) : Vehicle(pSort,pModel, pBrand, pPrice), type(pType) {

}
string Motorcycle::getType() {
	return type;
}
void Motorcycle::setType(string pType) {
	type = pType;
}
string Motorcycle::toString() {
	string line = getSort();
	line += ";";
	line += getModel();
	line += ";";
	line += getBrand();
	line += ";";
	line += std::to_string(getPrice());
	line += ";";
	line += type;
	line += ";";
	line += "\n";
	return line;
}