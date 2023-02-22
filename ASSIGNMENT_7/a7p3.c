//Write a program to check whether a given number is there in the Fibonacci
//series or not.

#include <stdio.h>
int main(){
    int prev=0,cur=1,next=0,n,i;
    printf("Enter a number \n");
    scanf("%d",&n);

    for (i=0;1;i++){
        next= prev + cur;
        prev = cur;
        cur = next;
        if (next == n){
            printf("Number found");
            break;
        }
        if ( next > n){
            printf("Not found");
            break;
        }

    }

    return 0;
}