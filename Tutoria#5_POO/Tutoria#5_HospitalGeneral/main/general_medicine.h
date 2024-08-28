#pragma once
#include "patient.h"
class GeneralMedicine : public Patient {
private:
    string occupation;
    string employer;
    bool workIncapacity;

public:
    GeneralMedicine(int age, int id, string name, string phone, string occupation, string employer, bool workIncapacity);

    ~GeneralMedicine();

    string toString();
};