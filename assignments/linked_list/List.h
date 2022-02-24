#pragma once
#include <iostream>
#include "Node.h"

class List{
  private: 
    Node *head;
   
  public:
    List();
    ~List();
    
  
    void insert(std::string data); // prepends
    int insertIndex(std::string data, int index);

    std::string toString();
    
    
};
