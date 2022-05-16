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

  int count_leaves(); 
  int leaves(Node * n, int x);

  void delete_node(int x);
  void remove(int x);
  void insert(int x);
  
  Node * search_node(Node * n, int x, bool parent);
  Node * searchR(int x);
  Node * get_root();

  void setup();
};
