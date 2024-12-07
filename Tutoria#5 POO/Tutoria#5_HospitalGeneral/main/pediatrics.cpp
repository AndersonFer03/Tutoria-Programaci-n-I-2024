#include "pediatrics.h"

Pediatrics::Pediatrics(int age, int id, string name, string phone, string parentName, string parentPhone)
    : Patient(age, id, name, phone) {
    this->parentName = parentName;
    this->parentPhone = parentPhone;

}

Pediatrics::~Pediatrics() {}

string Pediatrics::toString() {
    return "Patient Name: " + getName() + ", ID: " + to_string(getId()) + ", Age: " + to_string(getAge()) + ", Phone: " + getPhone() + ", Parent Name: " + parentName + ", Parent Phone: " + parentPhone;
}