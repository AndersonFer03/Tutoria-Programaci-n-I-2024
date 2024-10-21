#include "node.h"
Node::Node() :next(nullptr){

}
Course* Node::getCourse() {
	return course;
}

Node* Node::getNext() {
	return next;
}
void Node::setCourse(Course* pCourse) {
	course = pCourse;
}
void Node::setNext(Node* pNext) {
	next = pNext;
}
