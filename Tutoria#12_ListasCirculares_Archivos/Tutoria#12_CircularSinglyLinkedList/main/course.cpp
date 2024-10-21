#include "course.h"


Course::Course() {

}
Course::Course(string name, int amountStudents, int NRC) {
	this->amountStudents = amountStudents;
	this->name = name;
	this->NRC = NRC;
}

int Course::getAmountStudents() {
	return amountStudents;
}
string Course::toString() {
	std::stringstream _amount; //Función para pasar los enteros de los atributos en string 
	_amount << amountStudents;
	string amountSt = _amount.str();

	string line = name;
	line += ",";
	line += amountSt;
	line += ",";
	line += std::to_string(NRC);
	line += ",";
	line += "\n";
	return line;
}
void Course::print() {

	cout << "Nombre del Curso: " << name << endl;
	cout << "Cantidad de estudiantes: " << amountStudents << endl;
	cout << "NRC: " << NRC << endl;
}