#include <iostream>
#include "OList.h"

OList::OList() {
  head = nullptr;
}

OList::~OList() {
  Node * trailer = nullptr;

  while (head != nullptr) {
    trailer = head;
    head = head->getNext();
    delete trailer;
  }
}

void OList::insert(int data) {
  Node * walker = head;
  Node * trailer = nullptr;
  Node * temp = new Node(data);

  while (walker != nullptr && data > walker->getData()) {
    trailer = walker;
    walker = walker->getNext();
  }

  if (trailer == nullptr) {
    temp->setNext(head);
    head = temp;
  } else {
    trailer->setNext(temp);
    temp->setNext(walker);
  }

  return;
}


std::string OList::toString() {
  std::string result = "head --> ";
  Node * walker = this->head;

  while (walker != nullptr) {
    result += std::to_string(walker->getData());
    result += " --> ";
    walker = walker->getNext();
  }

  result = result + "nullptr";
  return result;
}

bool OList::contains(int data) {
  Node * walker = head;

  while (walker != nullptr) {
    if (walker->getData() == data) {
      return true;
    }

    walker = walker->getNext();
  }

  return false;
}

int OList::get(int index) {
  Node * walker = head;

  while (walker && index > 0) {
    walker = walker -> getNext();
    index--;
  }

  if (walker != nullptr) {
    return walker->getData();
  }

  return -1;
}

void OList::remove(int index) {
  Node * walker = head;
  Node * trailer = nullptr;

  while (index > 0 && walker != nullptr) {
    trailer = walker;
    walker = walker->getNext();
    index = index - 1;
  }

  if (walker == nullptr) {
    throw std::out_of_range("out of range");
  }

  if (trailer == nullptr) {
    head = walker->getNext();
    delete walker;
  } else {
    trailer->setNext(walker->getNext());
    delete walker;
  }
}
