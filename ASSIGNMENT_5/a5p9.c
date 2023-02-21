//Write a program to print cubes of the first N natural numbers
#include <stdio.h>
int main(){
    int i,n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("Cube of first  %d numbers are below : ",n);
    printf("\n\n");
    for (i=1;i<=n;i++){
        printf("Cube of %d is %d",i,i*i*i);
        printf("\n");
    }
    printf("\n");

    return 0;
}