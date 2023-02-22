//Write a program in c to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int num[20][20],n,i,j,sR[20]={0},sC[20]={0}; 
    printf("\nEnter Number of Rows And Columns : ");
    scanf("%d",&n);
    printf("\n\nEnter Matrix Elements ......\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter Elements in Pockets [%d] [%d] ",i,j);
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }


for(i=0;i<n;i++)
    {   
        //sC=sR=0;
        for (j=0;j<n;j++)
        {
            sR[i] = sR[i] + num[i][j];
            sC[i] = sC[i] + num[j][i];
        }
        //printf("Sum of Row = %d , Sum of Column = %d",sR,sC); 
    }


    printf("\n\nMatrix is ....\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\t%d\n",sR[i]);
    }
    printf("\n\n");                                                                
    for (i=0;i<n;i++)
    {
        printf("%d\t",sC[i]);

    }
    printf("\n\n");

    



    return 0;
}