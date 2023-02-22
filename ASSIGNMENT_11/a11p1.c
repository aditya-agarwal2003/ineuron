//Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>
int lcm_of_two_numbers(int,int);
int main(){
    int a,b;
    printf("Enter two number :  ");
    scanf("%d %d",&a,&b);

    printf("LCM of %d and %d is %d",a,b,lcm_of_two_numbers(a,b));


    return 0;
}

int lcm_of_two_numbers(int num_1,int num_2){
    int i;
    for (i=1;i<=num_1*num_2;i++){

        if ((i%num_1==0)&&(i%num_2==0)){

            return i;            

        }

    }


}