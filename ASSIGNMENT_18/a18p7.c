//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>

int isPalindrome()
{}
int main()
{
    char str[20];
    int l,i;
    printf("\n\nEnter a string : ");
    gets(str);


    l=strlen(str);
    for (i=0;i<l/2;i++)
    {

        if (str[i]!=str[l-1-i])
        {
            printf("Not a palindrome ");
            printf("\n\n");
            break;
        }
    }

    if (i==l/2)
    {

        printf("Palindrome");
        printf("\n\n");
    }

    return 0;
}
















/*int main()
{
    char str[100];
    
    printf("\n\nEnter String : ");
    gets(str);
    //fgets(str,100,stdin);
    int i=0,j=strlen(str);
    while (i<=j)
    {

        if (str[i] != str[j-1])
        {
            break;

        }
        i++;
        j--;
    }
    if (i>j)
    {

        printf("Palindrome");
        printf("\n\n");
    }
    else
    {

        printf("Not palindrome");
        printf("\n\n");
    }

    return 0;
}*/