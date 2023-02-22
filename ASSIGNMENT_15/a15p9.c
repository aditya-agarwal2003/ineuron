//Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>  

int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,6,8,11,12};
    int c[10],k=0,i=0,j=0;
    printf("\n\n");




    
    for (k=0;k<10;k++)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
    }

    for (k=0;k<=9;k++)
    {
        printf("%d ",c[k]);
    }
    printf("\n");
}
