//define matrix type(1d,2d,3d)
//input values from user
//performing specific operation(addition,transpose0)
//display result



#include<stdio.h>
int main(){
  int arr[2][3];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &arr[i][j]);
    }
    
  }
  

  for ( int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}