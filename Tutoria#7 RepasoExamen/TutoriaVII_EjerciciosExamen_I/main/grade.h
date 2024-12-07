#pragma once
#include <iostream>
#include "course.h"
using namespace std; 

class Grade {
private:
	float average;
	bool isApproved;
	int academicCycle;
	Course* course;
public:
	Grade(){}
	Grade(float pAverage, bool pIsApproved, int pAcademicCycle, Course* pCourse) {
		average = pAverage;
		isApproved = pIsApproved;
		academicCycle = pAcademicCycle;
		course = pCourse;
	}
	~Grade(){}
	int getAverage() {
		return average;
	}
	bool getIsApproved() {
		return isApproved;
	}
	Course* getCourse() {
		return course;
	}
	int getAcademicCycle() {
		return academicCycle;
	}
};