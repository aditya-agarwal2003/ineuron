//Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int sum_of_Sq(int);
int sum_of_Sq(int n)
{
    
    if (n==1)
        return 1;
    return (n*n)+sum_of_Sq(n-1);

}

int main()
{
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printf("Sum of squares of first %d numbers is %d",n,sum_of_Sq(n));
    printf("\n\n");

    return 0;
}