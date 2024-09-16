#pragma once
#include "user.h"
#include "academicHistory.h"
class Student : public User {
private:
	int studentId;
	AcademicHistory* academicHistory;

public:
	Student(){}
	Student(string pName, string pId, int pStudentId, AcademicHistory* pAcademicHistory)
		: User(pName, pId){
		studentId = pStudentId;
		academicHistory = pAcademicHistory;
	}
	~Student(){}

};