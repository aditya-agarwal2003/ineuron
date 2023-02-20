//Write a program to swap values of two int variables without using a third variable.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n");
    printf("a=%d b=%d",a,b);
    printf("\n");
    return 0;
}