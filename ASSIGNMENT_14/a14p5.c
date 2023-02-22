//Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
#include <stdio.h>
int main()
{
    int min=999999,num[10],i;
    printf("\n\nEnter 10 numbers : ");
    for (i=0;i<=9;i++)
    {   
        scanf("%d",&num[i]);
        if (min > num[i])
        {
            min = num[i];
        }
    }
    printf("\n\n");
    printf("%d",min);
    printf("\n\n");    

    return 0;
}