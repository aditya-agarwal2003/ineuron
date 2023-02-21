//Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.

#include <stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if (65<=c && c<=90)
        printf("alphabet uppercase");
    else if (97<=c && c<=122)
        printf("alphaber lowercase");
    else if (48<=c&&c<=57)
        printf("a digit");
    else   
        printf("special character");
    return 0;
} 