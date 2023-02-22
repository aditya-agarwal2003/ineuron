//Write a progrma which takes the month number as an input and display number of 
//days in that month.

#include <stdio.h>
int main(){
    int x;
    printf("\nEnter month number (1-12) ");
    scanf("%d",&x);
    switch(x){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d days",31);
            break;

        case 2:
            printf("%d/%d days",28,29);
        
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d days",30);
    }

    return 0;
}