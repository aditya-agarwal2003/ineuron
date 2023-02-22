//Write a program to count digits in a given number

#include <stdio.h>
int main(){
    int i,count=0,x;
    printf("Enter a number : ");
    scanf("%d",&x);
    for (;x!=0;i++){
        x=x/10;
        count=count+1;
    }
    printf("Number of digit is %d",count);
    return 0;
}