//Write a program to interchange the values of two variables using a third variable.//

#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter value of a :");
  scanf("%d" , &a);
  printf("Enter value of b :");
  scanf("%d" , &b);
  c=a;
  a=b;
  b=c;
  printf("Interchnaged value: %d\n", a);
  printf("Interchnaged value: %d\n", b);
  return 0;
}