//Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int sumEven(int);
int sumEven(int n)
{

    if (n==0)
        return 0;
    return (2*n) + sumEven(n-1);

}

int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printf("Sum of first %d even natural number is %d",n,sumEven(n));
    printf("\n\n");
    return 0;
}