//Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void printSquare(int n)
{

    if (n>0)
    {
        printSquare(n-1);
        printf(" %d",n*n);

    }
                                                                                        
}


int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printSquare(n);
    printf("\n\n");

    return 0;
}