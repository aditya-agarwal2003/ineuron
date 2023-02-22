//Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h> 
float area(float);
int main(){
    float radius;
    printf("Enter radius :  ");
    scanf("%f",&radius);
    printf("Area is :  %f",area(radius));

    return 0;
}

float area(float radius){
    return (3.14*radius*radius);
    

}

