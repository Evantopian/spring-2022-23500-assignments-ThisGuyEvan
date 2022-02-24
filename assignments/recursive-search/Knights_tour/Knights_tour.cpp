#include <iostream>
#include <unistd.h>


// recursively code knight's tour.


std::string field = "_:";


void print_arr(int **arr, int n){
  std::cout << "\n";
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      printf("%3d", arr[i][j]);
    }
    std::cout << "\n";
  }
  std::cout << "\n";
}


void k_tour(int **board, int n, int r, int c, int &mov){
  
  // need to update base case.
  if (mov == n*n+1) return;
  
  // bound handler
  if (r < 0 || c < 0 || r > n-1 || c > n-1
      || board[r][c] != 0)
    return;
  
  board[r][c] = mov;
  mov++;
  
  usleep(1000000);
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
  int **board;
  board = new int *[n];

  for (int i = 0; i < n; i++){
    board[i] = new int[n];
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
