/*Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/

#include <stdio.h>
int even_odd(int);
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("%d",even_odd(number));
    return 0;
}

int even_odd(int x){
    if (x%2==0){
        return 1;
    }
    else{
        return 0;
    }
}