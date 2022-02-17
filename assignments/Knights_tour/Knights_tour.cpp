#include <iostream>
#include <unistd.h>

// recursively code knight's tour.


std::string field = "_:";


void print_arr(std::string **arr, int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      std::cout << arr[i][j] << " \n"[j == n-1];
    }
  }
  std::cout << "\n";
}


void k_tour(std::string **board, int n, int r, int c, int &mov){
  
  // need to update base case.
  if (n == 0) return;
  
  // bound handler
  if (r < 0 || c < 0 || r > n-1 || c > n-1
      || board[r][c] != field)
    return;
  
  
  board[r][c] = (mov < 10) ? "0" + std::to_string(mov) + ":" :
                                   std::to_string(mov) + ":";
  mov++;
  
  //usleep(100000);
  print_arr(board, n);
  
  // up, down
  k_tour(board, n, r-1, c+2, mov);
  k_tour(board, n, r+1, c+2, mov);
  k_tour(board, n, r-1, c-2, mov);
  k_tour(board, n, r+1, c-2, mov);

  // left, right 
  k_tour(board, n, r+2, c-1, mov);
  k_tour(board, n, r+2, c+1, mov);
  k_tour(board, n, r-2, c-1, mov);
  k_tour(board, n, r-2, c+1, mov);
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

  int mov = 1;
  k_tour(board, n, 2, 2, mov);
  
  // del arr
  for (int i = 0; i < n; i++){
    delete [] board[i]; 
  }
  delete board;

  std::cout << std::endl;
}
