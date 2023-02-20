//Write a program to swap values of two int variables

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers :  ");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n a=%d,b=%d",a,b);
    printf("\n");
    return 0;
}