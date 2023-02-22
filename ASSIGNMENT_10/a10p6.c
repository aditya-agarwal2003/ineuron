//Write a function to calculate the factorial of a number. (TSRS)

#include <stdio.h>
long int factorial(long int);
int main(){
    long int n;
    printf("Enter a number : ");
    scanf("%ld",&n);

    printf("Factorial of %ld is %ld\n",n,factorial(n));

    return 0;
}

long int factorial(long int number){
    long int fact=1,i=1;
    for (i=1;i<=number;i++){
        fact = fact * i;
    }

    return (fact);


}