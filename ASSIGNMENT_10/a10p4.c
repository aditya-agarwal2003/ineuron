//Write a function to print first N natural numbers (TSRN)

#include <stdio.h>
void print_natural_numbers(int);
int main(){
    int n;
    printf("Enter a number :  ");
    scanf("%d",&n);
    print_natural_numbers(n);
    

    return 0;
}

void print_natural_numbers(int number){

    int i=1;
    for (i=1;i<=number;i++){
        printf("%d \n",i);
    }
    printf("\n");

}