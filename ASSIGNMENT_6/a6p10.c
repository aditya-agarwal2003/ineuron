//Write a program to reverse a given number
#include <stdio.h>
int main(){
    int i,n,remainder,reverse=0;
    printf("ENter a number : ");
    scanf("%d",&n);
    while(n != 0){
        remainder=n%10;
        n=n/10;
        reverse=reverse*10 + remainder;
    }
    printf("Reverse is %d",reverse);

    return 0;
}


