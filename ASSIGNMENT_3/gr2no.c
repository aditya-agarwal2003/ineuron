// C program to find the greatest of two numbers

#include<stdio.h>
int main()
{

printf("\n\n\n\n\nName : \n");
printf("Roll no. :  \n");
//Fill the code
int num1, num2;
printf("\nEnter two numbers : ");
scanf("%d %d",&num1,&num2);
if(num1 > num2)
{ 
printf("%d is greater\n\n\n\n\n\n\n",num1);
}
else
{
printf("%d is greater\n\n\n\n\n\n",num2);
}
return 0;
}