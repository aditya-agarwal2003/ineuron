//Write a function to calculate simple interest. (TSRS)

#include <stdio.h>
float simple_intrest(float,float,float);
int main(){
    float p,r,t;
    printf("Enter Principal rate and time :  ");
    scanf("%f %f %f",&p,&r,&t);
    printf("Simple intrest is :  %f",simple_intrest(p,r,t));

    return 0;
}

float simple_intrest(float p ,float r,float t){
    return ((p*r*t)/100);


}