//Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>
int main(){
    int prev = 0, cur=1,next=0,n,i;
    printf("ENter a number \n");
    scanf("%d",&n);
    
    for (i=1;i<=n-1;i++){

        next = prev + cur;
        prev=cur;
        cur=next;
    }
    printf("%dth term of Fibonnaci series is %d ",n,next);
    return 0;
}