#include<stdio.h>
#include<string.h>
int main(){

char str1[100] ;
char str2[100] ;

printf("enetr value of string 1:\n" );
scanf("%s\n", &str1);

printf("%s\n", str1);
printf("enetr value of string 2:\n" );
scanf("%s", &str2);

printf("%s", str2);

int result1 = strcmp(str1,str2); 
int result2 = strcat(str1,str2);

printf("%d %d" &result1, &result2 );

return 0;

}