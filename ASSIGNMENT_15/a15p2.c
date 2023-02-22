////Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int smallest(int arr[],int);
int smallest(int arr[],int n)
{
    int i;
    int min = arr[0];
    for (i = 0; i <= n - 1; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
} 

int main()
{
    int arr[100],i,n;
    printf("\n\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\n\nEnter the values in the array : ");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n\nSmallest in given array is %d",smallest(arr,n));
    printf("\n\n");
    return 0;
}