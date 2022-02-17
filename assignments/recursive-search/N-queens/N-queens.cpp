#include <iostream>

std::string field = " . ";
std::string q_path = " x ";


void n_queens(std::string **board, int n, int r, int c){
  
  if (n == 0) return;
  
  // if out of bounds for queen:
  
  // current queen location, make walls for vert, hori, & diag.



  // Possible queen movements:
  

  // vertical

  // horizontal
  
  // diagonal
}

int main(){

  // init arr
  int n = 5;
  std::string **board;
  board = new std::string *[n];

  for (int i = 0; i < n; i++){
    board[i] = new std::string[n];
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      board[i][j] = field;
    }
  }

  n_queens(board, n, n-(n/2), n-(n/2)); 


}
