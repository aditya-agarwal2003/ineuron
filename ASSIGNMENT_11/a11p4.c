//Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int find_next_prime(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Next prime number of %d is %d",n,find_next_prime(n));
    return 0;
}

int find_next_prime(int num){
    int x,i,flag=0;
    for (x=num+1;1;x++){
        flag=0;
        for (i=2;i<=num/2;i++){

            if (x%i==0){

                flag=1;

            }

        }
        if (flag==0){
            return x;
        }

    }
}