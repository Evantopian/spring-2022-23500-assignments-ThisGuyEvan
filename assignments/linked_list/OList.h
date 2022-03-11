#pragma once
#include <iostream>
#include "Node.h"

class OList{
 private: Node *head;

 public:
  OList();
  ~OList();

  int length();

  void insert(std::string data);
  void insert(int index, std::string data);
  void remove(int index);
  
  bool contains(int data);
  
  std::string get(int index);
  std::string toString();   
  
  void reverse();
};
