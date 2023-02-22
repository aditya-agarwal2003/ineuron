//Write a function to calculate length of the string.
#include<stdio.h>
void size_of_string(char str[]);
void size_of_string(char str[])
{
    int i;
    for (i=0;str[i] != '\0';i++);
    printf("Length of %s is %d",str,i-1);

}

int main()
{
    char a[100];
    printf("\nEnter string : ");
    fgets(a,100,stdin);
    printf("\n\n");
    size_of_string(a);
    printf("\n\n");
    return 0;
}


