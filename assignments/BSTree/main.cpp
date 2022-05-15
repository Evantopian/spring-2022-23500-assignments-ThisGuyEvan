#include <iostream>
#include "Node.h"
#include "BSTree.h"

int main(){

  BSTree *bst = new BSTree();
  bst->setup();
  std::cout << bst->get_debug_string() << std::endl;

  bst->delete_node(bst->get_root(), 18);

  std::cout << bst->get_debug_string() << std::endl;

  /*
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
*/
}
