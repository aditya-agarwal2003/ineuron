//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("\nEnter string to copy in another array : ");
    fgets(a,30,stdin);
    int i,n = strlen(a);

    for (i=0;i<n;i++)
    {
        b[i] = a[i];
    }

    printf("\n %s\n",b);
    return 0;
}