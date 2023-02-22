//Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.

#include <stdio.h>
int main()
{
    int num[10],i,sum=0;
    float avg = 0;
    printf("\n\nEnter 10 numbers : ");

    for (i=0;i<=9;i++)
    {

        scanf("%d",&num[i]);
        sum = sum + num[i];

    }
    avg = sum/10.0;
    printf("\n\nAverage of 10 numbers is %f ",avg);
    printf("\n\n");
    return 0;
}