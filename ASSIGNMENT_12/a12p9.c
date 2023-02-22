//Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void decimaltoOctal(int);
void decimaltoOctal(int x)
{

    if (x>0)
    {
        decimaltoOctal(x/8);
        printf("%d",x%8);
    }

}

int main()
{
    int x;
    printf("\n\nEnter a number : ");
    scanf("%d",&x);
    printf("\n\n");
    decimaltoOctal(x);
    printf("\n\n");

    return 0;
}