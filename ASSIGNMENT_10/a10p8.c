//Write a function to calculate the number of arrangements one can make from n items
//and r selected at a time. (TSRS)
#include <stdio.h>
int factorial(int);
int perm(int,int);
int main(){
    int n,r;
    printf("Enter n and r : ");
    scanf("%d %d",&n,&r);
    printf("%d\n",perm(n,r));
    return 0;
}

int perm(int n,int r){

    return factorial(n)/(factorial(n-r));

}

int factorial(int number){
    int i=1,fact=1;
    for (i=1;i<=number;i++){

        fact = fact * i;
        
    }
    return fact;
}