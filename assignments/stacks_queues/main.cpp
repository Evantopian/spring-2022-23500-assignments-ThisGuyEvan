#include <iostream>
#include "stack.h"


int main(){
  Stack *s = new Stack();
  
  s->push(5);
  s->push(10);
  s->push(20);
  s->push(30);
  s->push(999);
  

  std::cout << "Size: " << s->getSize() << "Top: " << s->top() << std::endl;
  int y = s->pop();
  y = s->pop();

  std::cout << y << " | Size: " << s->getSize() << std::endl;

}
