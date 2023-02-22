****
******************
//Write a program to check whether a given number is an Armstrong number
//or not
#include <stdio.h>
#include <math.h>
int main(){
    int num,count=0,rem,sum=0,x,y;
    printf("Enter a number : ");
    scanf("%d",&num);
    x=num;
    while (x!=0){
        x=x/10;
        count++;
    }
    y=num;
    while (y!=0){
        rem=y%10;
        y=y/10; 
        sum += pow(rem,count);
    }
    if (sum == num){

        printf("\n%d is an Armstrong number ",num);

    }                                                                   
    else{

        printf("\n%d is not an Armstrong number ",num);

    }
    printf("\n\n");
    return 0;
}