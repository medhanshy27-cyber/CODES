//Write a program to convert the temperature given in Fahrenheit to Centigrade //

#include<stdio.h>

int main(){
  float f,c;
  printf("Enter temperature in Celcius:\n");
  scanf("%f", &c);
  f = (c*9/5)+32;
  printf("Temperature in Fahrenheit: %f\n",f);
  return 0;
}

