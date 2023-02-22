//Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int sumOdd(int);
int sumOdd(int n)
{

    if (n==1)
    {
        return 1;
    }
    return (2*n-1) + sumOdd(n-1);

}


int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printf("Sum of first %d odd natural numbers is %d",n,sumOdd(n));
    printf("\n\n");

    return 0;
}