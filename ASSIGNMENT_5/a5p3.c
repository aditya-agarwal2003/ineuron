//Write a program to print the first N natural numbers in reverse order

#include <stdio.h>
int main(){
    int n,i=1;
    printf("Enter number : ");
    scanf("%d",&n);
    while (n>=1){
        printf("%d",n);
        printf("\n");
        n--;
    }
    
    return 0;
}