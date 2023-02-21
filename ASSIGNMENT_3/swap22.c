

#include<stdio.h>
int main()
{
    int a,b;
    
printf("\n\n\n\n\nName : Nandini Dahiya \n");
printf("Roll no. : 25098 \n");
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap a=%d and b=%d\n\n\n",a,b);



    return 0;
}