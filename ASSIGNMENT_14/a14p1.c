//Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.
#include <stdio.h>
int main()
{
    int num[10],sum=0,i;
    printf("\n\nEnter 10 numbers : ");

    for (i=0;i<=9;i++)
    {

        scanf("%d",&num[i]);
        sum = sum + num[i];
    }

    printf("\n\n");
    printf("Sum of 10 size array is %d",sum);
    return 0;
}