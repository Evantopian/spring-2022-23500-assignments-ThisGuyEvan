#include <iostream>
#include "OList.h"


OList::OList() {
  head = nullptr;
}


OList::~OList(){
  Node *trailer;
  std::cerr << "Destructing\n";
  while(head != nullptr){
    trailer = head;
    head = head->getNext();
    delete trailer;
  }
}

void OList::insert(std::string data){
  Node *tmp = new Node(data);
  tmp->setNext(head);
  this->head = tmp;
}


void OList::insert(int loc, std::string data){
  Node *tmp = new Node(data);

  Node *walker = head;
  Node *trailer=nullptr;  
  while (walker != nullptr && loc > 0){
    trailer = walker;
    walker = walker->getNext();
    loc = loc - 1;
  }

  if (loc > 0){
    throw std::out_of_range("Out of range");
  }

  if (trailer==nullptr){
    tmp->setNext(head);
    head=tmp;
  } else {
    tmp->setNext(walker);
    trailer->setNext(tmp);
  
  }
}

void OList::remove(int loc){

  Node *walker = head;
  Node *trailer=nullptr; 
  while (walker != nullptr && loc > 0){
    trailer = walker;
    walker = walker->getNext();
    loc = loc - 1;
  }

  if (walker == nullptr){
    throw std::out_of_range("Out of range");
  }

  if (trailer==nullptr){
    head = walker->getNext();
    delete walker;
  } else {
    trailer->setNext(walker->getNext());
    delete walker;
  }
}

std::string OList::get(int loc){
  std::string result = "";
  Node *walker = head;

  while (walker && loc > 0){
    walker = walker->getNext();
    loc--;
  }
  if (walker)
    return walker->getData();
  else
    return "";
    
    
}

int OList::length(){
  int l = 0;
  Node *walker = head;
  while (walker){
    l++;
    walker = walker->getNext();
  }
  return l;
}


std::string OList::toString(){
  std::string result = "";
  Node *walker = this->head;
  while (walker != nullptr){
    result = result + walker->getData() + "->";
    walker = walker->getNext();
  }
  result = result + "null";
  return result;
}


