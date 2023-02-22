/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include <stdio.h>
int factorial(int);
int comb(int,int);
int main(){
    int n,r;
    printf("Enter n and r :  \n");
    scanf("%d %d",&n,&r);

    printf("%d",comb(n,r));
    printf("\n\n");

    return 0;
}

int factorial(int number){
    int fact=1,i;
    for (i=1;i<=number;i++){
        fact = fact * i;
    }
    return fact;
}

int comb(int n,int r){

    return factorial(n)/(factorial(r)*factorial(n-r));
    
}