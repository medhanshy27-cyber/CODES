//have to include <math.h> so that i can take squareroot //
//should add dis in double float value so that i can change the answer to decimal value// 
//Write a program to find out the distance between two points e.g. (x1, y1) and (x2, y2). //
//Hint: Distance=√(x2-x1)2+ (y2-y1)2//



#include<stdio.h>
#include<math.h>
int main (){
  int x1,x2,y1,y2;
  double dis;
  printf("enter value of x1:");
  scanf("%d", &x1 );
  printf("Enter value of x2:");
  scanf("%d", &x2 );
  printf("enter value of y1:");
  scanf("%d", &y1 );
  printf("enter value of y2:");
  scanf("%d", &y2 );
  

  dis=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
  printf("distance between 2 points:%.2f\n", dis );
  return 0;

}