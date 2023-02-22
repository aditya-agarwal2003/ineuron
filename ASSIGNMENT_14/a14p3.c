//Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int so=0,se=0,i,num[10];
    printf("\n\nEnter 10 numbers : ");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);   
    }

    for (i=0;i<=9;i++)
    {
        if (num[i]%2==0){
            se= se + num[i];
        }
        else{
            so = so + num[i];
        }
    }

    printf("\n\n");
    printf("Sum of even numbers is %d",se);
    printf("\n\n");
    printf("Sum of odd numbers is %d",so);
    printf("\n\n");
    return 0;
}