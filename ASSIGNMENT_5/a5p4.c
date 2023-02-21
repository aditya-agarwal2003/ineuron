//Write a program to print the first N odd natural numbers 

#include <stdio.h>
int main(){
    int i=1,n;
    printf("Enter number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("%d",2*i-1);
        printf("\n");
    }
    return 0;
} 