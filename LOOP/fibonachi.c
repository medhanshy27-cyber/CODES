// write a program to print fibonichi series 
#include<stdio.h>
int main()
{
  int a=0,b=1;
  int n,i,next;

  printf("How long of the series do you want?");
  scanf("%d", &n);

  printf("fibonachi series: %d , %d , ", a,b );

  for ( i =2; i < n; i++)
  {
    next = a+b;
    printf("%d , ", next);
    a=b;
    b=next;
  }
  return 0;
}