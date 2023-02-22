//Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.
#include <stdio.h>
int main()
{   
    int num[10],i,gr=-99999999  ;
    printf("\n\nEnter 10 numbers : ");
    for (i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
        
        if (num[i]>gr)
        {

            gr=num[i];

        }
    }
    printf("\n\n");
    printf("%d",gr);
    printf("\n\n");
    return 0;
}