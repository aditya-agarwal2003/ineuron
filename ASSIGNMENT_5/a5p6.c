//Write a program to print the first N even natural numbers

#include <stdio.h>
int main(){
    int i,n;
    printf("Enter number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("%d ",2*i);
    }
    return 0;
}