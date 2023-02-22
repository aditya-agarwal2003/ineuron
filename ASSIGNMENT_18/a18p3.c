//Write a function to compare two strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[]="abc",str2[]="abc";
    int i=0;

    int len1 = strlen(str1);

    while (str1[i]==str2[i] && i>len1){
        i++;
    }

    if (str1[i] > str2[i])
        printf("str1 > str2");

    else if (str1[i] < str2[i])
        printf("str1 < str2");

    else 
        printf("str1 == str2");

    return 0;
}