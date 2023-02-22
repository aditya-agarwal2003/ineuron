//Write a function in c to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void reverse_array(int num[],int);
void reverse_array(int num[],int n)
{

    int i;
    for (i=n-1;i>=0;i--)
    {
        printf("%d ",num[i]);
    }
}
int main()
{
    int i,n,num[100];
    printf("\n\nEnter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values in the array : ");
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n\n");
    reverse_array(num,n);
    printf("\n\n");

    return 0;
}