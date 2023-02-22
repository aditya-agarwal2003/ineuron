//Write a function in c to count a total number of duplicate elements in an array.(means elements that 
//occurs 2 times in an array).
#include<stdio.h>
int total_duplicate_elements_array(int num[],int);
int total_duplicate_elements_array(int num[],int n)
{
    int i,j,count=0;
    for (i=0;i<n-1;i++)
    {

        for (j=i+1;j<n;j++)
        { 
            
            if (num[i]==num[j])
            {
                count++;
            
            }
        }
    }
    return count;

}

int main()
{   
    int num[100],i,n;
    printf("\n\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\n\nEnter the elements in the array :  ");
    for (i=0;i<n-1;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n\n");
    printf("Total duplicate elements in arrays = %d",total_duplicate_elements_array(num,n));
    printf("\n\n");
    return 0;
}