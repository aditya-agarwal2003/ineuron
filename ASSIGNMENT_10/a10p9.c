//Write a function to check whether a given number contains a given digit or not.
//(TSRS)

#include <stdio.h> 
int check_digit_in_number(int,int);
int main(){
    int number,digit;
    printf("Enter a number : ");
    scanf("%d",&number);

    printf("Enter a digit :  ");
    scanf("%d",&digit); 

    if (number < 0){
        number = number * -1;
    }
    
    int a;     
    a=check_digit_in_number(number,digit);
    if (a==1){
        printf("Digit found");
    }
    else{
        printf("Digit  not found");
    }

    
    return 0;
}

int check_digit_in_number(int number,int digit){

    while (number>0){


        int x;
        x = number % 10;
        number = number  / 10;
        if (x == digit){

            return 1;

        }
        
    }
    return 0;
        
}




















/*
#include <stdio.h>
int factorial(int);
int comb(int,int);
int pascal(int);
int main(){
    int number_of_rows;
    printf("ENter number of rows :  ");
    scanf("%d",&number_of_rows);
    printf("\n\n");
    pascal(number_of_rows);
    printf("\n\n");
    return 0;
}

int factorial(int number){

    int i=1,fact=1;
    for (i=1;i<=number;i++){

        fact = fact * i;

    }
    return fact;
}

int comb(int n ,int r){

    return factorial(n)/(factorial(r)*factorial(n-r));

}

int pascal(int n){
    int i,j;
    for (i=0;i<=n;i++){

        for (j=0;j<=i;j++){

            printf(" %d ",comb(i,j));

        }
        printf("\n");
    }

}*/