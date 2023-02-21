//Write a program to print the first N natural numbers.

#include <stdio.h>
int main(){
    int i=1,n;
    printf("Enter number : ");
    scanf("%d",&n);
    while (i<=n){
        
        printf("%d",i);
        printf("\n");
        i++;

    }

    return 0;
}