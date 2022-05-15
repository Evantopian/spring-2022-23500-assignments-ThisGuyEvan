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
    return std::to_string(st->getData()) + " -> (" + traverse(st->getLeft()) + ") " + 
                                               "(" + traverse(st->getRight()) + ")";
  }
}

Node *BSTree::get_root(){
  return root;
}

std::string BSTree::get_debug_string(){
  if (root != nullptr){
    return traverse(root) + "nullptr";
  }
  return nullptr;
}

// delete a node in the bst
void BSTree::delete_node(Node * st, int n){
  
  if (st == nullptr) return; 

  // case #1: delete at depth
  Node *l = st->getLeft(); //left node of current subtree
  Node *r = st->getRight(); //right node of current subtree

  // given a  correct bst, the value on the left will always be the replacement
  // at the left hand side:
  if (l->getData() == n){
    Node * tmp = l->getRight();
    st->setLeft(l->getLeft());
    st->getLeft()->setRight(tmp);
    l->setLeft(nullptr);
    return;
  }  



  // searching bst for node.
  if (n < st->getData()) delete_node(st->getLeft(), n);
  if (n > st->getData()) delete_node(st->getRight(), n);
}


void BSTree::setup(){
  Node *n = new Node(20);
  root = n;

  n = new Node(18);
  root->setLeft(n);

  Node *n2 = new Node(15);
  n->setLeft(n2);


  n2 = new Node(12);
  n->getLeft()->setLeft(n2);

  n2 = new Node(40);
  n->setRight(n2);
  
  n2 = new Node(55);
  n->getRight()->setRight(n2);

  n2 = new Node(50);
  root->setRight(n2);

  n = new Node(35);
  n2->setLeft(n);

  n = new Node(70);
  n2->setRight(n);
}

