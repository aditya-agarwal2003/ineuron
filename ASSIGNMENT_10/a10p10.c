/*Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/
 
#include <stdio.h>
void primefactor(int);
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    printf("\n\n");

    primefactor(number);

    return 0;
}

void primefactor(int number){
    int i = 1;
    printf("Factors of %d are :  ",number);
    for (i=2;number!=1;i++){

        while (number % i == 0){
            number = number/i;
            printf("%d , ",i);

        }

    }
    printf("\n\n");

}