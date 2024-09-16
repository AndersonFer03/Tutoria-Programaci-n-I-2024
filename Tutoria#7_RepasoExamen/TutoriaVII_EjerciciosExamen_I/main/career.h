#pragma once
#include <iostream>
#include "course.h"
using namespace std;
class Career {
private:
	int code;
	string school;
	string name;
	Course* course;

public:
	Career(){}
	~Career(){}
	string* sortCourses(string* courses, int amount) {
		string name, level;
		for (int j = amount - 1; j > 0;j-=2) {
			for (int i = 1; i<j;i+=2) {
				if (courses[i] > courses[i + 2]) {
					name = courses[i - 1];
					courses[i - 1] = courses[i + 1];
					courses[i + 1] = name;

					level = courses[i];
					courses[i] = courses[i + 2];
					courses[i + 2] = level;
				}
			}
		}
		return courses;
	}
	string** showCoursesXLevel(string* courses, int amount) {
		courses = sortCourses(courses, amount);
		string** matrix = new string*[4];
		int z = 0;
		for (int i = 0; i < 4; i++) {
			matrix[i] = new string[2];
			for (int j = 0; j < 2; j++) {
				matrix[i][j] = courses[z];
				z+=2;
			}
		}

		return matrix;
	}
};