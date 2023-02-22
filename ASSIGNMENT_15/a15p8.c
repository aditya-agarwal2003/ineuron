//Write a functioin in c to print all unique elements in an array.
#include<stdio.h>

void print_unique_elements_array(int num[],int);
void print_unique_elements_array(int num[],int n)
{

    int i,j,flag=0;
    for (i=0;i<=n-1;i++)
    {
        flag=0;
        for (j=0;j<=n-1;j++)
        {
            if (i==j)
            {
                continue;
            }
            if (num[i]==num[j])
            {
                flag=1;
                break;
            }
        }
        //printf("%d",flag);
        if (flag==0)
        {
            printf("%d ",num[i]);
        }
    }
}

int main()
{
    int i,n,num[100];
    printf("\n\nEnter the size of array : ");
    scanf("%d",&n);
    printf("\n\nEnter the elements in the array : ");
    for (i=0;i<=n-1;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\n\n");
    print_unique_elements_array(num,n);

    return 0;
}