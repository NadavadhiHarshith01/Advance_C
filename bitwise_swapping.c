#include<stdio.h>

void main(){

    int a=10,b=33;
    printf("Before swapping\n");
    printf("a:%d b:%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping\n");
    printf("a:%d b:%d",a,b);
}
