#pragma once
#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int age;
    int id;
    string name;
    string phone;

public:
    Patient(int age, int id, string name, string phone);
    int getAge();
    string getName();
    int getId();
    string getPhone();
    virtual ~Patient();

    virtual string toString() = 0;
};