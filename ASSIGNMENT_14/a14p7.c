//Write a program to find second largest in an array.Take array values from the user.
#include <stdio.h>
/*int main()


{
    int i,j,temp=0;
    int num[10];
    printf("\n\nEnter 10 numbers : ");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }

    for (i=0;i<9;i++)
    {
        for (j=i+1;j<=9;j++)
        {   
            if (num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
            
        }
    }

    for (i=9;i>=0;i--)
    {
        if (num[i] == num[i-1])
        {
            printf("%d",num[i-2]);
            break;
        }
        else
        {
            printf("%d",num[i]-1);
        }

    }

    //printf("\n\nSecond largest element in array is %d",num[9]);
    printf("\n\n");
    return 0;
}
*/

int main()
{
    int a[100],i,n,largest = 0,s_largest = 0;
    printf("\n\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("\n\n");
    printf("Enter the values in the array : ");
    printf("\n\n");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d",&a[i]);
    }

    largest = a[0];

    for (i = 1; i <= n - 1; i++)
    {

        if (a[i] > largest)
        {
            s_largest = largest;
            largest = a[i];

        }
        else
        {

            if (a[i] > s_largest)
            {

                s_largest = a[i];
            }

        }

    }
    printf("\n\nThe largest value in the array is :%d\n",largest);
    printf("The Second largest value in the array is :%d\n",s_largest);
    printf("\n");
    return 0;
}
