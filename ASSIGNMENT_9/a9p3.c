//Write a program which takes the day number of a week and displays a
//unique greeting message for the day.

#include <stdio.h>
int main(){
    int x;
    printf("Enter day number (1-7): ");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("This is Monday");
            break;
        case 2:
            printf("This is Tuesday");
            break;
        case 3:
            printf("This is Wednesday");
            break;
        case 4:
            printf("This is Thrusday");
            break;
        case 5:
            printf("This is Friday");
            break;
        case 6:
            printf("This is Saturday");
            break;
        case 7:
            printf("This is Sunday");
            break;
        default:
            printf("Invalid number!!");
            break;

    }

    return 0;
}