//Write a program in c to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int num[20][20],sum=0,i,j,n;

    printf("\nEnter Number of Row And Column in a Matrix : ");
    scanf("%d",&n);
    printf("\n\nEnter Elements of Matrix ......\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter elements in pocket [%d] [%d]\t",i,j);
            scanf("%d",&num[i][j]);
        }
    }

    printf("\nMatrix is .....\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i+j==n-1)
            {
                sum=sum+num[i][j];
            }
        }
    }
    printf("\n\n");
    printf("Sum of left diagonal matrix is : %d",sum);
    printf("\n\n");

    return 0;
}