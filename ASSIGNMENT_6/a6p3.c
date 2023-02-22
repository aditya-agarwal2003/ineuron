//Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter a number :  ");
    scanf("%d",&n);
    for (i=1;i<=n*2-1;i=i+2){
        sum=sum+i;
    }
    printf("Sum of first %d odd natural numbers is %d",n,sum);
    return 0;
}