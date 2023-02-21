//Write a program to print a table of 5.
#include <stdio.h>
int main(){
    int i,n;
    printf("Enter number : ");
    scanf("%d",&n);
    for (i=1;i<=10;i++){
        printf("%d X %d = %d",n,i,n*i);
        printf("\n");
    }
    return 0;
}