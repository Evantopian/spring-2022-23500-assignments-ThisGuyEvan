#include <iostream>
#include "List.h"

List::List(){
  head = nullptr;

}

List::~List(){
  delete head;
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


// will add on 2/24/22 (too late for assignment at the moment, was attempted.)
int List::insertIndex(std::string data,int index){
  Node *n = new Node(data);
  
  // Proabably some from of looping with iterations until we can reach the 
  // point where you can safely perform n->getNext(head);
  
  return -1;
}
