//Write a recursive function to print first N natural numbers

#include <stdio.h> 
void printNatural(int);
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    printNatural(number);
    return 0;
}

void printNatural(int n){

    if (n==0){
        return;
    }
    printNatural(n-1);
    printf(" %d",n);

}