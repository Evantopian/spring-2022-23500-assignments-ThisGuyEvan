#include <iostream>
#include "Node.h"
#include "BSTree.h"


BSTree::BSTree(){
  root = nullptr;
}


std::string BSTree::traverse(Node *st) {
  // traverse left subtree then right subtree, build recurisvely.
  if (st == nullptr){
    return "";
  }
  // parentheses to show subtree.
  else{
    return std::to_string(st->getData()) + " -> (" + traverse(st->getLeft()) + ") " + "(" + traverse(st->getRight()) + ")";
  }
}


std::string BSTree::get_debug_string(){
  if (root != nullptr){
    return traverse(root) + "nullptr";
  }
  return nullptr;
}


void BSTree::setup(){
  Node *n = new Node(10);
  root = n;

  n = new Node(20);
  root->setLeft(n);

  Node *n2 = new Node(30);
  n->setRight(n2);

  n2 = new Node(40);
  n->setLeft(n2);

  n2 = new Node(50);
  root->setRight(n2);

  n = new Node(60);
  n2->setLeft(n);

  n = new Node(70);
  n2->setRight(n);
}

