#pragma once
#include <iostream>
#include "course.h"
using namespace std;
class Node {
private:
	Node* next;
	Course* course;
public:
	Node();
	Course* getCourse();
	Node* getNext();
	void setCourse(Course* pCourse);
	void setNext(Node* pNext);

};