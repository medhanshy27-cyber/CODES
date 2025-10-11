//Write a program for converting distance in mm to cm, inch, feet (1 cm =10mm,1 inch=2.5cm, 1 feet =12 inches//
#include<stdio.h>
int main(){
  float mm,cm,inch,feet;
  printf("ENTER DISTANCE IN MM");
  scanf("%f", &mm);

  cm = mm/10;
  inch = cm/2.5;
  feet = inch/12;
  printf("DISTANCE IN CM  %f\n",cm);
  printf("DISTANCE IN INCH %f\n",inch);
  printf("DISTANCE IN FEET %f\n",feet);


  return 0;
}