//Write a program to evaluate the area of the circle Area = Pi * R2//

#include<stdio.h>
int main (){
  float pi,R,area;
  printf("Enter value of radius R:");
  scanf("%f", &R);
  pi= 3.14;
  area = pi * R * R;
  printf("Area of circle with radius R: %.2f",area);
}
