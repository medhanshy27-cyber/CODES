#include<stdio.h>
int main(){

  int arr[5];

  printf("ENTER VALUES OF ARRAY:");

  for ( int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("DISPLAYING ARRAY:\n");

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);

  }
  return 0;
  

}