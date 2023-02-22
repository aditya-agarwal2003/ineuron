//Write a recursive function to print first N even natural numbers
#include <stdio.h>
void printEven(int);
void printEven(int n)
{
    if (n>0)
    {
        printEven(n-1);
        printf(" %d",2*n);
    }
}

int main()
{   
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printEven(n);
    printf("\n\n");

    return 0;
}