//Write a program to print hello world. Find a sum and average of three numbers//
#include<stdio.h>
int main(){
  printf("Hello World\n");
  float a,b,c,sum,avg;
  printf("enter 1st number:");
  scanf("%f",&a);
  printf("enter 2st number:");
  scanf("%f",&b);
  printf("enter 3st number:");
  scanf("%f",&c);

  sum = a+b+c;
  avg = a+b+c/3;
  printf("sum of 3 numbers is %f\n", sum);
  printf("average of 3 numbers is %f\n", avg );

  return 0;
}