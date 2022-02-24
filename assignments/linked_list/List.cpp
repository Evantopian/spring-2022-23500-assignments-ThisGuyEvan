#include <iostream>
#include "List.h"

List::List(){
  head = nullptr;

}

void List::insert(std::string data){
  Node *n1 = new Node(data);
  n1->setNext(head);
  head = n1;
}

std::string List::toString(){
  if (head == nullptr){
    return "";
  }

  Node *walker = head;
  std::string s = "";
  while (walker != nullptr){
    s = s + walker->getData() + "--->";
    walker = walker->getNext();
  }

  return s+"nullptr";
}
