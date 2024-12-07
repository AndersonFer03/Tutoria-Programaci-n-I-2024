#pragma once
#include "user.h"

class Professor : public User {
private:
	int experience;
	string degree;

public:
	Professor() {}
	Professor(string pName, string pId, string pDegree)
		: User(pName, pId) {
		degree = pDegree;
	}
	~Professor() {}

};