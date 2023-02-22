//Write a program to find the second smallest number in an array.Take array values from
//the user.
#include<stdio.h>
int main()
{
    int num[100],n,i,smallest,s_smallest;
    printf("\n\nEnter size of array : ");
    scanf("%d",&n);
    printf("\n\nEnter the values in array : ");
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&num[i]);
    }
    smallest=num[0];

    for (i=1;i<=n-1;i++)
    {

        if (smallest > num[i])
        {
            s_smallest=smallest;
            smallest=num[i];
        }

        else 
        {
            if (s_smallest > num[i])
            {
                s_smallest=num[i];
            }
        }
    }
    printf("\n\nThe smallest value in the array is %d",smallest);
    printf("\n\nThe second smallest value in the array is %d",s_smallest);
    printf("\n\n");
    return 0;
}