//Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>
void printNatural(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printNatural(n);

    printf("\n");

    return 0;
}

void printNatural(int n)
{
    if (n==0){
        return;
    }

    printf(" %d",n);
    printNatural(n-1);
}