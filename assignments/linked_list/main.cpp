#include <iostream>
#include "Node.h"
//#include "List.h"
#include "OList.h"

int main(){
  OList *l = new OList();

  
  l->insert(1);
  l->insert(1);
  l->insert(2);
  l->insert(3);
  l->insert(5);
  l->insert(8);
  l->insert(13);

  std::cout << "List: " << l->toString() << "\n\n";
}



