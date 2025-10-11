#include <stdio.h>
int main(){
  char num;
  printf("ENTER NUMBER=");
  scanf("%c", &num);

  switch (num)
  {
  case '0': printf("0 decimal value");break;
  case '1': printf("1 decimal value");break;
  case '2': printf("2 decimal value");break;
  case '3': printf("3 decimal value");break;
  case '4': printf("4 decimal value");break;
  case '5': printf("5 decimal value");break;
  case '6': printf("6 decimal value");break;
  case '7': printf("7 decimal value");break;
  case '8': printf("8 decimal value");break;
  case '9': printf("9 decimal value");break;
  case 'A': printf("10 decimal value");break;
  case 'B': printf("11 decimal value");break;
  case 'C': printf("12 decimal value");break;
  case 'D': printf("13 decimal value");break;
  case 'E': printf("14 Decimal value");break;
  case 'F': printf("15 decimal value");break;
  
  

    default:printf("ERROR: HEXA DECIMAL VALUE NOT USED");
    break;
  }
  return 0;
}





// read a character or a digit from the user and convert into equilant hexa decimal