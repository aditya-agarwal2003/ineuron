//Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main(){
    int sum=0,i,n;
    printf("Enter a natural numbers : ");
    scanf("%d",&n);

    for (i=2;i<=2*n;i=i+2){
        sum=sum+i;
        printf("%d",i);
    }

    printf("Sum of first %d even numbers is %d",n,sum);
    return 0;
}