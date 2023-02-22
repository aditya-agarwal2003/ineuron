//Write a program to convert a given string into lowercase.
#include<stdio.h>
int main()
{
    char a[] = "AdITya";
    int i=0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
        i++;
    }

    printf("\n %s\n",a);


    return 0;
}