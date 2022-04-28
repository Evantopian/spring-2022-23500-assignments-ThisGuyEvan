#include <iostream>
#include "Node.h"


int main(){
  Node *root = new Node(0);
 
  Node *n = new Node(10);
  root->setLeft(n);

  n = new Node(50);
  root->setRight(n);
  
  std::cout << root->getData() << "\n";
  std::cout << root->getLeft()->getData() << " | " << 
               root->getRight()->getData() << std::endl;

  n = new Node(20);
  root->getLeft()->setLeft(n);
  
  n = new Node(60);
  root->getRight()->setRight(n);


}
