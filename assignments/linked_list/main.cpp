#include <iostream>
#include "Node.h"
#include "List.h"

int main(){
  List *l1 = new List();
  l1->insert("a"); 
  l1->insert("b"); 
  l1->insert("c"); 
  
  std::cout << l1->toString() << "\n";
  return 0;
}




/* Notes:
  // intializing nodes
  Node *p1 = new Node("");
  p1->setData("hello");

  std::cout << p1->getData();
  
  Node *p2 = new Node(", world!");
  std::cout << p2->getData() << "\n";

  p1->setNext(p2);
  std::cout << p1->getNext()->getData();
  std::cout << p2->getData() << "\n";

  p2 = new Node(" ! ");
  p1->getNext()->setNext(p2);
  
  std::cout << p1->getData() << "\n";
  std::cout << p1->getNext()->getData() << "\n";;
  std::cout << p1->getNext()->getNext()->getData() << "\n";;

  Node *walker = p1;
  walker = walker->getNext();
  std::cout << walker->getData() << "\n";

  // looping
  while(walker != nullptr){
    std::cout << walker->getData() << "\n";
    walker = walker->getNext();
  }
  // essentially accessing a node out of bounds.
  //std::cout << walker->getData() << "\n"; 
*/
