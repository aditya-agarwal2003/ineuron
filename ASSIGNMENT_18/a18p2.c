//wRITE A FUNCTION TO REVERSE A STRING.
#include<stdio.h>
#include<string.h>
void reverse_string(char str[]);
void reverse_string(char str[])
{
    int i=0,j=strlen(str)-1;

    while (i<=j)
    {
        int t;
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;

    }
    printf(" %s",str);
}

int main()
{   
    char a[100];

    printf("\n\n");
    printf("Enter string : ");
    fgets(a,100,stdin);
    reverse_string(a);
    printf("\n\n");
    return 0;
}