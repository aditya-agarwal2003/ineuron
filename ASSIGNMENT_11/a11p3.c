//Write a function to check whether a given number is Prime or not. (TSRS)

#include <stdio.h>
int check_prime(int);
int main(){
    int n,result;
    printf("Enter a number : ");
    scanf("%d",&n);

    result=check_prime(n);
    if (result==1){
        printf("\n%d is a prime number.",n);
    }

    else{
        printf("\n%d is not a priime number.",n);
    }

    return 0;
}

int check_prime(int num){
    int i=2,flag=0;
    for (i=2;i<=num/2;i++){

        if (num % i == 0){
            flag = 1;
            return 0;
            break;
        }

    }
    if (flag==0){
        return 1;
    }

}