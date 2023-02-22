//Write a recursive function to print first N odd natural numbers

#include <stdio.h>

void printOdd(int);

void printOdd(int n)
{

    if (n==0)
        return;
    
    printOdd(n-1);
    printf("%d ",2*n-1);

}


int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printOdd(n);
    printf("\n\n");

    return 0;
}