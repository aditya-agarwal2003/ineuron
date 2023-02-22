//Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("\n\nenter first matrix  : \n");
    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {
            
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nenter second matrix : \n");
    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {

            scanf("%d",&b[i][j]);
        }
    }
    
    printf("\n\nThe first matrix is : \n");
    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {

            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThe second matrix is : \n");
    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {

            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("\n\nThird matrix is : \n");
    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {

            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}











/*int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9},
    b[3][3] = {9,8,7,6,5,4,3,2,1},
    c[3][3]
    ,i,j;
    printf("\n\n");
    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ",c[i][j]);
        }
    }
    printf("\n\n");
    return 0;
}*/