#include <iostream>
#include "Dictionary.h"

// Check list:
// Constructor and destructor done.
// insert working on rn.



Dictionary::Dictionary(){
  d = new List*[size];

  for (int i = 0; i < size; i++)
    d[i] = new List();
}


Dictionary::~Dictionary(){
  for (int i = 0; i < size; i++){
    delete d[i];
  }
  delete d;
}






