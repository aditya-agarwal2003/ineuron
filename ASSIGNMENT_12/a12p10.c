//Write a recursive function to print reverse of a given number
#include <stdio.h>
void printrev(int);
void printrev(int n)
{   if (n>0)
    {
        printf("%d",n%10);
        printrev(n/10);
    }
    
}

int main()
{   
    int n;
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    printf("\n\n");
    printrev(n);
    printf("\n\n");

    return 0;
}