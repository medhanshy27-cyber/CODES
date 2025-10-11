#include"sodoku.h"
int main(){
  int **puzzle;

  puzzle = createPuzzle();
  printpuzzle(puzzle);


  return 0;
}