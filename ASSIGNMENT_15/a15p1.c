//Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int largest(int arr[],int);
int largest(int arr[],int n)
{
    
    int i;
    int max = -9999999;                                                                                        
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;

}


int main()
{
    int arr[100];
    int n,i;
    printf("\n\nEnter the size of arrays : ");
    scanf("%d",&n);
    printf("\n\nEnter the values in the arrays : ");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n\nLargest in given array is %d",largest(arr,n));
    printf("\n\n");
    return 0;
}
