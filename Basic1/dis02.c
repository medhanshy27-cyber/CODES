#include<stdio.h>
#include<math.h>
int main (){
  double x1,x2,y1,y2;
  double dis;
  printf("enter value of x1,x2,y1,y2:");
  scanf("%lf %lf %lf %lf",&x1,&x2, &y1, &y2 );
  dis=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
  printf("distance between 2 points:%.2f\n", dis );
  return 0;

}