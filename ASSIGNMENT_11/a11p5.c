//Write a function to print first N prime numbers (TSRN)

#include <stdio.h>
void first_n_prime(int);
int main(){
    int n;
    printf("Enter a number : ");                                    
    scanf("%d",&n);
    first_n_prime(n);
    return 0;
}


void first_n_prime(int number){

    int n1,i,flag=0,x=2;
    while (number){
        for (n1=1;1;n1++){
        for (i=2;i<=n1/2;i++){
            if (n1%i==0){
                flag=1;
            }
        }
        if (flag==0){
            printf("%d\n",n1);
            number--;
        }
        
        }
    
    }
}