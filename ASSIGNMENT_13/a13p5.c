//Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sum_of_digits(int);
int sum_of_digits(int n)
{

    if (n==0)
    {
        return 0;
    }

    return sum_of_digits(n/10)+n%10;
}

int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printf("Sum of digits is %d",sum_of_digits(n));
    printf("\n\n");
    return 0;
}