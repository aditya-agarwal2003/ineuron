//Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
#define N 50

int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    printf("Enter rows and column for first matrix : \n");
    scanf("%d %d",&m,&n);
    printf("\nEnter first matrix : ");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter rows and column for second matrix : \n");
    scanf("%d %d",&p,&q);
    printf("\nEnter second matrix :\n");
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nFirst matrix is :\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond matrix is :\n");
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    if (n!=p)
    {
        printf("can not multiply");
    }
    else
    {
        for (i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                sum=0;
                for (k=0;k<m;k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
        }

        printf("multiplication is :\n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}














/*int main()
{
    int i,j,k,sum=0;
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {9,8,7,6,5,4,3,2,1};
    int c[3][3];

    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {

            for (k=0;k<=2;k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
            sum = 0;
        }
    }

    for (i=0;i<=2;i++)
    {

        for (j=0;j<=2;j++)
        {
            printf("%d ",c[i][j]);
        }

        printf("\n");
    }

    return 0;
}*/