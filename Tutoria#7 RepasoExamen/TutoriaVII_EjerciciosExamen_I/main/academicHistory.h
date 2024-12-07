#pragma once
#include <iostream>
#include "grade.h"
using namespace std;

class AcademicHistory {
private:
	float PGA;
	Grade* grades;
	int totalGrades;
public:
	AcademicHistory() {
		totalGrades = 0;
		grades = new Grade[0];
		PGA = 0.0;
	}
	~AcademicHistory(){}
	void registerGrade(Grade grade){
		
		Grade* auxGrades = new Grade[totalGrades];
		auxGrades = grades;
		totalGrades++;
		grades = new Grade[totalGrades];
		for (int i = 0; i < totalGrades;i++) {
			grades[i] = auxGrades[i];
		}
		grades[totalGrades - 1] = grade;
		delete[] auxGrades;
	
	
	}
	void calculatePGA(){}
	void showCourses(int level, int academicCycle) {
		for (int i = 0; i < totalGrades; i++) {
			if (grades[i].getAcademicCycle() == academicCycle && grades[i].getCourse()->getLevel()==level) {
				cout << grades[i].getCourse()->getName() << "\t\t" << grades[i].getAverage() <<"\t\t"<< grades[i].getIsApproved();
			}
			cout << endl;
		}
	}

};