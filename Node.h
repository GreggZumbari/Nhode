#ifndef NODE_H
#define NODE_H

#include "Student.h"

class Node {

 public:
  //Functions
  Node* getNext();
  Student* getStudent();
  void setNext(Node* node);

  //Constructor & Destructor
  Node(Student* student);
  ~Node();

 private:
  Node* node;
  Student* student;
};

#endif
