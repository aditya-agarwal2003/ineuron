//Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
int main()
{
    int a[10] = {2,4,7,3,3,23,24,5,3,5};
    int freq[100] = {0},i;

    for (i=0;i<10;i++)
    {
        freq[a[i]]++;

    }
    printf("\n\n");
    for (i=0;i<100;i++)
    {
        if (freq[i] != 0)
            printf("%d ==> %d\n",i,freq[i]);
        
    }

    printf("\n\n");

    return 0;
}