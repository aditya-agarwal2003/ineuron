//Write a function to find the first occurrence of adjacent duplicate values in the array.
//Function has to return the value of the element.
#include<stdio.h>
int find_first_occurrence(int num[],int); 
int find_first_occurrence(int num[],int n)
{
    int i;
    for (i=0;i<=n-1;i++)
    {
        if (num[i]==num[i+1])
        {
            return num[i];
        }
    }
    return 0;
}
int main()
{
    int num[100],i,n;
    printf("\n\nEnter the size of array : ");
    scanf("%d",&n);
    printf("\n\nEnter the values in the array : ");
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n\n First occurrence of adjacent duplicate values in the array = %d",find_first_occurrence(num,n));
    printf("\n\n");
    return 0;
}