//Write a function to check whether a given string is an alphanumeric string or not.
//Write a function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
int main()
{
    char S[20];
    printf("\n\nEnter string : ");
    
    fgets(S,20,stdin);
    int a=0,b=0,i;
    for (i=0;S[i];i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z' || S[i] >= 'a' && S[i] <= 'z')
        {
            a=1;

        }

        if (S[i] >= '0' && S[i] <= '9')
        {
            b=1;

        }


    }

    if (a==1 && b==1){
        printf("%s is alphanumeric ",S);
    }
    else{
        printf("\n%s is not alphanumeric ",S);
    }
    
    return 0;
}