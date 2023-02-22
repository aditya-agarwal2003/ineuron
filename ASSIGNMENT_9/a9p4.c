/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int choice,a,b,c;
    while (1){
        printf("\n\n1. To check isosceles Triangle\n");
        printf("2. To check Right angle Triangle\n");
        printf("3. To check Equilateral Triangle\n");
        printf("4. Exit\n");
        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);
        printf("\n\nEnter length of 3 sides of triangle\n\n : ");
        scanf("%d %d %d",&a,&b,&c);


        switch(choice){
            case 1:
                if(a==b||b==c||c==a)
                    printf("Isosceles");
                else
                    printf("Not an Isosceles");
                break;
            case 2:
                if (a*a==b*b + c*c || b*b==c*c+a*a || c*c==a*a+b*b)
                    printf("Right Triangle");
                else
                    printf("Not a Right Triangle");
                break; 
            case 3:
                if ((a==b)&&(b==c))
                    printf("Equilateral Triangle");
                else
                    printf("Not a Equilateral Triangle");
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Choice!!");
                break;

            
        }                      
    }
    return 0;
}