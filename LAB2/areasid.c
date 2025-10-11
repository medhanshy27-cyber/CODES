#include<stdio.h>
int main(){
    int radius;
    printf("enter radius: ");
    scanf("%d", &radius);
    float pi= 3.14;
    float area= (pi)*(radius*radius);
    printf("area: %f", area);
    return 0;
}