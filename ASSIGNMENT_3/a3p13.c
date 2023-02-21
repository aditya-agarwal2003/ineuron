//Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if (x%3==0&&x%2==0){
        printf("Divisible by 3 and 2");
    }
    else
        printf("Not divisible by 3 and 2");
    
    return 0;
}