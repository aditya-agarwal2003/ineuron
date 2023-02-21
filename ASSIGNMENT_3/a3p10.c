//Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.

#include <stdio.h>
int main(){
    float cp,sp;
    printf("Enter Cost price : ");
    scanf("%f",&cp);
    printf("Enter Selling price : ");
    scanf("%f",&sp);
    if (sp>cp){
        float profit=((sp-cp)*100)/cp;
        printf("profit percentage is of %f %%",profit);
    }
    else{
        float loss=((cp-sp)*100)/cp;
        printf("Loss percentage is of %f %%",loss);
    }
}