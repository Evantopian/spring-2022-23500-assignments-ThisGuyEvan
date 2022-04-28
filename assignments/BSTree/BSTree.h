#pragma once
#include <iostream>
#include "Node.h"

class BSTree{
 private:
  Node *root;

public:
  BSTree();
 
  std::string traverse(Node *n);
  std::string get_debug_string();

  void setup();
};
