//Write a program to print first N terms of Fibonacci series

#include <stdio.h>
int main(){
    int prev = 0, cur=1,next=0,n,i;
    printf("ENter a number \n");
    scanf("%d",&n);
    printf("1 ");
    for (i=1;i<=n-1;i++){

        next = prev + cur;
        printf("%d ",next);
        prev=cur;
        cur=next;
    }
    return 0;
}