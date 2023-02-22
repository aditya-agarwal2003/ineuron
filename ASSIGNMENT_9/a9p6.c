//Program to check whether a year is a leap year or not. Using switch
//statement
/*
#include <stdio.h>
int main(){
    int x;
    printf("Enter year to check leap year or not :  ");
    scanf("%d",&x);
    if (x%100==0){
        if (x%400==0){
            printf("Leap year");

        }
        else{
            printf("Not leap year");
        }
    }
    else{
        if (x%4==0){
            printf("Leap year");
        }
        else{
            printf("Not leap year");
        }
    }

    return 0;
}*/

#include <stdio.h>
int main(){
    int x;
    printf("Enter a year :  ");
    scanf("%d",&x);

    switch (x%100==0){
        case 1:
            switch (x%400 == 0)
            {
            case 1:
                printf("Leap year");
                break;
            case 0:
                printf("Not Leap year");
                break;
            }
            break;
        case 0:
            switch (x%4==0){
                case 1:
                    printf("Leap year");
                    break;
                case 0:
                    printf("Not leap year");
                    break;
            }


    }

    return 0;
}