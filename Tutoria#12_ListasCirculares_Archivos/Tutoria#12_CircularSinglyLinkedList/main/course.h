#pragma once
#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Course {

private:
	string name;
	int amountStudents;
	int NRC;

public:
	Course();
	Course(string name, int amountStudents, int NRC);
	int getAmountStudents();
	string toString();
	void print();
};