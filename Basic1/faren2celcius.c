// Centigrade to Fahrenheit. Hint: C=5/9(F-32))//
#include<stdio.h>

int main(){
  float f,c;
  printf("Enter temperature in Fahrenheit:\n");
  scanf("%f", &f);
  c = 5.0/9.0 * (f-32);
  printf("Temperature in celcius: %f\n",c);
  return 0;
}

