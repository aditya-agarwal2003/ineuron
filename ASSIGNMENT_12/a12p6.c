//Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>
void printEven(int);
void printEven(int n)
{
    if (n>0)
    {
        printf(" %d",2*n);
        printEven(n-1);
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