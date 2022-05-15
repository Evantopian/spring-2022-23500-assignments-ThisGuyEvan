#pragma once
#include <iostream>
#include "Node.h"

class BSTree{
 private:
  Node *root;

public:
  BSTree();
 
  std::string traverse(Node * st);
  std::string get_debug_string();
  void delete_node(Node * st, int n);

  bool has_children(Node * st);
  Node *get_root();

  void setup();
};
