#pragma once
#include "patient.h"

class Pediatrics : public Patient {
private:
    string parentName;
    string parentPhone;

public:
    Pediatrics(int age, int id, string name, string phone, string parentName, string parentPhone);

    ~Pediatrics();

    string toString();
};