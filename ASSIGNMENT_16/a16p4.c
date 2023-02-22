//Write a program in c to ind the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int num[20][20],i,j,sum=0,r,c;
    printf("\n\nEnter Number of Row And Column in a Matrix : ");
    scanf("%d%d",&r,&c);
    printf("\nEnter Elements of Matrix ....\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter elements in pocket [%d] [%d] \t ",i,j);
            scanf("%d",&num[i][j]);
        }
    }

    printf("Matrix is ........\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i==j)
            {
                sum = sum + num[i][j];

            }
        }
    }
    printf("\n\n");
    printf("Sum of right diagonal matrix is : %d",sum);


    printf("\n\n");
    return 0;
}              