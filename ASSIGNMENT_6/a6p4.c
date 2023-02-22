//Write a program to calculate sum of squares of first N natural numbers

#include <stdio.h>
int main(){
    int sum=0,i,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum=sum+i*i;
    }
    printf("Sum of squares of first %d natural numbers is %d",n,sum);
    return 0;
}