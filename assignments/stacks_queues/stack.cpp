#include <iostream>
#include "stack.h"


Stack::Stack(){
  ll = new OList();
  size = 0;
}  

void Stack::push(int data){
  ll->insert(data);
  size++;
}


// resolve potential error with bool function or catch function later.
int Stack::pop(){
  int x = ll->get(size-1); 
  ll->remove(size-1);
  size--;
  return x;
}

int Stack::top(){
  return ll->get(size-1);
}


int Stack::getSize(){
  return size;
}


bool Stack::is_empty(){
  return size-1 == 0;
}






