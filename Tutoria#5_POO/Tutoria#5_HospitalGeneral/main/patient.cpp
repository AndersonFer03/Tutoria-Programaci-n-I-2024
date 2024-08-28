#include "patient.h"

Patient::Patient(int age, int id, string name, string phone){
	this->age = age;
	this->id = id;
	this->name = name;
	this->phone = phone;
}

Patient::~Patient() {}

int Patient::getAge() {
    return age;
}
string Patient::getName() {
    return name;
}
int Patient::getId() {
    return id;
}
string Patient::getPhone() {
    return phone;
}