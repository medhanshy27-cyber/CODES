//Write a program to find the sum of the digits of a four-digit number (ex. 1234 sum=10) (without using a loop)//
// + (((a%10)-100)-10)//
// + (a%100 - 10)  //
// +  (((a/100)-10)) + ((a%100)/10) + (a%10)
#include<stdio.h>
int main(){
  int a,sum,sum1,sum2,sum3,sum4;
  printf("Enter a 4 digit number:\n");
  scanf("%d",&a);

  sum= (a/1000);
  sum1=  
  

  printf("find the sum of the digits of a four-digit number %d\n",sum);
  return 0;
}