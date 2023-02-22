//Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
#include <stdio.h>
int main()
{
    int a[100],b[100],i,n;
    printf("\n\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\n\nEnter the values in the array : ");
    for (i=0; i <= n - 1; i++)
    {
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    return 0;
}