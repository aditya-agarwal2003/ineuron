//Write a program which takes the month number as an input and display number of
//days in that month
#include <stdio.h>
int main(){
    int month_number;
    printf("Enter month number : ");
    scanf("%d",&month_number);
    if (month_number==1||3||5||7||9||11)
        printf("Number of days : %d",31);
    else if (month_number == 2)
        printf("Number of days : %d/%d",28,29);
    else if (month_number == 4||6||8||10||12)
        printf("Number of days : %d",30);
    return 0;
}