#pragma once
#include "patient.h"

class Geriatrics : public Patient {
private:
    string companionName;

public:
    Geriatrics(int age, int id, string name, string phone, string companionName);

    ~Geriatrics();

    string toString();
};