//Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sum(int n)
{

    if (n==1)
    {
        return 1;
    }
    return n+sum(n-1);

}


int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printf("Sum of first %d natural numbers is %d",n,sum(n));
    printf("\n\n");

    return 0;
}