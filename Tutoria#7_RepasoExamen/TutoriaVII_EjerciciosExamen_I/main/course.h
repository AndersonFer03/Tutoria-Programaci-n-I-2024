#pragma once
#include "professor.h"

class Course {
private:
	string name;
	int NRC;
	string code;
	int level;
	Professor professor;
public:
	Course(){}
	Course(string pName, int pNRC, string pCode, int pLevel, Professor pProfessor) {
		name = pName;
		NRC = pNRC;
		code = pCode;
		level = pLevel;
		professor = pProfessor;
	}
	~Course(){}
	int getLevel() {
		return level;
	}
	string getName() {
		return name;
	}
};