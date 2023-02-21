//Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if (x>=100 && x<=999){
        printf("Three digit number");
    }
    else{
        printf("Not a three digit number");
    }
    printf("\n");
    return 0;
}