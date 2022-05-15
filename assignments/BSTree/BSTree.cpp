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

void BSTree::insert(int value){
  Node *newnode = new Node(value);
  
  Node *p = root;
  Node *trailer;
  
  while (p != nullptr) {
    trailer = p;
    if (p->getData() == value){
      return;
    }
    else if (p->getData() < value){
      p = p->getRight(); 
    } else {
      p = p->getLeft();
    }
  }
  
  if (root==nullptr){
    root=newnode;
  } else {
    if (trailer->getData() < value){
      trailer->setRight(newnode);
    } else {
      trailer->setLeft(newnode);
    }
  }
}


Node * BSTree::search_node(Node * n, int value){
  if (n){
    if (n->getData() > value) n = search_node(n->getLeft(), value);
    else if (n->getData() < value) n = search_node(n->getRight(), value);
  }
  return n;
}

Node * BSTree::searchR(int x){
  return search_node(root, x);
}




void BSTree::remove(Node * n, int x){
  if (n){
    Node *del_node = search_node(n, x);
    std::cout << del_node->getData() << "\n";
  }
}







void BSTree::delete_node(int x){
  remove(root, x);
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

  n2 = new Node(25);
  n->getRight()->setLeft(n2);
  
  n2 = new Node(55);
  n->getRight()->setRight(n2);

  n2 = new Node(50);
  root->setRight(n2);

  n = new Node(35);
  n2->setLeft(n);

  n = new Node(70);
  n2->setRight(n);
}

