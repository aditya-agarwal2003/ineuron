//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b and c :  ");
    scanf("%d %d %d",&a,&b,&c);
    int disc = b*b-4*a*c;
    if (disc > 0){
        printf("Real & distinct");
    }
    else if (disc < 0){
        printf("Imaginary");
    }
    else{
        printf("Real and equal");
    }

    return 0;
}