#include "geriatrics.h"

Geriatrics::Geriatrics(int age, int id, string name, string phone, string companionName)
    : Patient(age, id, name, phone) {
    this->companionName = companionName;

}

Geriatrics::~Geriatrics() {}

string Geriatrics::toString() {
    return "Patient Name: " + getName() + ", ID: " + to_string(getId()) + ", Age: " + to_string(getAge()) + ", Phone: " + getPhone() + ", Companion Name: " + companionName;
}