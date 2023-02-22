//Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
/*int main()
{
    char str[100];
    int i;
    printf("Enter string : ");
    gets(str);
    for (i=0;str[i];i++);
    printf("Length of %s is %d",str,i);

    return 0;
}*/


int main()
{
    char str[100];
    int i=0,count=0;
    printf("Enter string : ");
    gets(str);
    while (str[i] != '\0')
    {
        i++;
        count++;
    }
    printf(" %d",count);

    return 0;
}




/*
int main()
{
    char str[100];
    int i;

    printf("Enter string : ");
    fgets(str,100,stdin);
    for (i=0;str[i]!='\0';i++);
    printf("length %d",i-1);

    return 0;
}*/



/*int main()
{
    char str[]="GURGAON";
    int i;
    for (i=0;str[i];i++);
    printf("\n\n");
    printf("%s has Length  %d",str,i);
    printf("\n\n");
    return 0;
}*/