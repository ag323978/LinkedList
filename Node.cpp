#include "Node.h"

Node::Node() {
  student = NULL;
  next = NULL;
}

Node::~Node() {
  next = NULL;
}

void Node::setStudent(Student* newStudent) {
  student = newStudent;
}

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* newNode) {
  next = newNode;
}

Node* Node::getNext() {
  return next;
}
