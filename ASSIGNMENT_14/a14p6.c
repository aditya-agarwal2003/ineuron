//Write a program to sort elements of an array of size 10. Take array values from the
//user.
#include <stdio.h>
int main()
{
    int a[10] = {2,45,34,75,24,78,65,33,24,56};
    int i,j,temp;
    printf("\n\n");
    for (i=0;i<9;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    return 0;
}