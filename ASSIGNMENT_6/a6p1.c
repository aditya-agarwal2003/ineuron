//Write a program to calculate sum of first N natural numbers

#include <stdio.h>
int main(){
    int i,N,sum=0;
    printf("Enter a natural number : ");
    scanf("%d",&N);
    for (i=1;i<=N;i++){
        sum=sum+i;
    }

    printf("Sum is %d",sum);
    return 0;
}