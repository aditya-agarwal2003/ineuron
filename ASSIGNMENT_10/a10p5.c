//Write a function to print first N odd natural numbers. (TSRN)

#include <stdio.h>
void print_odd_natural_number(int);
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    print_odd_natural_number(n);


    return 0;
}

void print_odd_natural_number(int number){

    int i=1;
    for (i=1;i<=number;i++){
        printf("%d\n",2*i-1);
    }

}