//1.	Write a program to convert the time in seconds to hours, minutes, and seconds. (1 hr = 3600 sec).//
#include<stdio.h>
int main(){
  int hour,min,sec1,sec2;
  printf("Enter time in hour:\n");
  scanf("%d", &hour);
  printf("Enter time in minutes:\n");
  scanf("%d", &min);
  sec1= hour*60*60;
  sec2= min*60;
  printf("TIME IN SECONDS: %d\n",sec1);
  printf("TIME IN SECONDS: %d\n",sec2);
  return 0;
}