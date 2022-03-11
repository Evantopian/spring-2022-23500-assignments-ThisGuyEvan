#include <iostream>
#include "Node.h"
//#include "List.h"
#include "OList.h"

int main(){
  OList *l1 = new OList();
  l1->insert("a"); 
  l1->insert("b"); 
  l1->insert("c"); 
  
  std::cout << l1->toString() << "\n";
  return 0;
}



