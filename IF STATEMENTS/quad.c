// 3.	Write a program to find the roots of a quadratic equation.  Hint: root = -b +/- sqrt(b2-4ac)/2a //
#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c,d;
  int root1,root2;
  printf("EQUATION IS IN FORM OF ax^2 + bx+ c....so\n");
  printf("ENTER VALUE OF A,B AND C\n");
  scanf("%d %d %d", &a,&b,&c);
  d=(b*b)-4*(a*c);
  if (d>=0)
  {
    root1= -b + sqrt(d)/(a*a);
    root2= +b + sqrt(d)/(a*a);
    printf("roots of this equations are: %d %d", &root1, &root2);

  }
  else
  {
    printf("equation has no real roots");
  }
  
}