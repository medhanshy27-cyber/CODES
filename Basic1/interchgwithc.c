//Write a program to interchange the values of two variables without using a third variable.
//
#include<stdio.h>
int main(){
  int a,b;
  printf("Enter value of a :");
  scanf("%d" , &a);
  printf("Enter value of b :");
  scanf("%d" , &b);
  a=b;
  b=a;
  printf("Interchnaged value: %d\n", a);
  printf("Interchnaged value: %d\n", b);
  return 0;
}