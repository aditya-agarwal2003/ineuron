#include<stdio.h>

int main()
{
    int num;
    
printf("\n\n\n\n\nName : \n");
printf("Roll no. :\n");
    printf("\nEnter a number : ");
    scanf("%d",&num);
 
    if(num == 0)
        printf("Neither positive nor negative\n\n\n");
    else if(num < 0)
        printf("Negative\n\n\n");
    else
        printf("Positive\n\n\n");
     
    return 0;
}