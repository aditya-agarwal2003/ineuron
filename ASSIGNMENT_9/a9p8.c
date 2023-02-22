/*Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

#include <stdio.h>
int main(){ 
    int x;
    printf("\nEnter a number :  ");
    scanf("%d",&x);
    printf("\n\n");

    switch(x>0){
        case 1:
            printf("%d",-x);
            printf("\n\n");
            break;
        case 0:
            printf("%d",-x);
            printf("\n\n");
            break;
    }


    return 0;
}