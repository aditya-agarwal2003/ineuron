//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main(){
    char c = 'f';
    if ((97<=c) && (c<=122))
        printf("Lower Case");
    if ((65 <= c) && (c <= 90))
        printf("Upper Case");
    return 0;
}