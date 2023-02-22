//Write a program to count vowels in a given string.
#include<stdio.h>
int main()
{
    char a[] = "Aditya";
    int count=0,i=0;
    while (a[i] != '\0')
    {
        if (a[i] == 'a' || a[i] ==  'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            count++;
        }

        //i++;
    }
    printf("\n %d\n",count);


    return 0;
}