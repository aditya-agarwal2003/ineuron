//Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.
#include <stdio.h>
int main()
{
    int a[100],i,n;
    printf("\n\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\n\nEnter the values in the array : ");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}