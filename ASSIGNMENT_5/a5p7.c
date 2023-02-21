//Write a program to print the first N even natural numbers in reverse order

#include <stdio.h>
int main(){
    int i,n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n");
    for (i=n;i>=1;i--){
        printf("%d",2*i);
        printf("\n");

    }
    printf("\n");
    return 0;
}