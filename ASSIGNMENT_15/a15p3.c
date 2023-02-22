//Write a function to sort an array of any size (TSRN)

#include <stdio.h>
void sorting(int arr[],int);
void sorting(int arr[],int n)
{

    int i,j,temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}


int main()
{
    int n,i,arr[100];
    printf("\n\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\n\nEnter the values in the array : ");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d",&arr[i]);
    }

    sorting(arr,n);

    return 0;
}