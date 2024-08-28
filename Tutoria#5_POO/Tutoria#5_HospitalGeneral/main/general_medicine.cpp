#include "general_medicine.h"

GeneralMedicine::GeneralMedicine(int age, int id, string name, string phone, string occupation, string employer, bool workIncapacity)
    : Patient(age, id, name, phone) {
    this->occupation = occupation;
    this->employer = employer; 
    this->workIncapacity = workIncapacity;


}

GeneralMedicine::~GeneralMedicine() {}

string GeneralMedicine::toString() {
    return "Patient Name: " + getName() + ", ID: " + to_string(getId()) + ", Age: " + to_string(getAge()) + ", Phone: " + getPhone() + ", Occupation: " + occupation + ", Employer: " + employer +
        ", Work Incapacity: " + (workIncapacity ? "Yes" : "No");
}