#pragma once
#include <iostream>
using namespace std;

class User {
private:
	string name;
	string id;

public:
	User(){}
	User(string pName, string pId) {
		name = pName;
		id = pId;
	}
	~User(){}
};