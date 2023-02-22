//Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>
int main(){
    int a,b; 
    int hcf(int,int);
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    printf("HCF of %d and %d is %d",a,b,hcf(a,b));

    return 0;
}

int hcf(int num_1,int num_2){
    int i,hcf;
    int min = num_1 < num_2 ? num_1 : num_2 ;
    for (i = 1;i<=min;i++){

        if ((num_1%i==0)&&(num_2%i==0)){

            hcf=i;

        }

    }
    return hcf;
    


}