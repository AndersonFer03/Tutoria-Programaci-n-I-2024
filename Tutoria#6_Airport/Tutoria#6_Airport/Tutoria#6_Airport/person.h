#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	string personId;
	string email;
	int phoneNumber;

public:
	Person(){}
	Person(string pName, string pPersonId, string pEmail, int pPhoneNumber) {
		name = pName;
		pPersonId = pPersonId;
		email = pEmail;
		phoneNumber = pPhoneNumber;
	}
	~Person(){}



};