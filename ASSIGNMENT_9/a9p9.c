/*Program to Convert even number into its upper nearest odd number
Switch Statement.*/


#include <stdio.h>
int main(){
    int x;
    printf("\n\nEnter a number : ");
    scanf("%d",&x);

    printf("\n\n");
    switch (x%2==0){
        case 1:
            printf("%d",x+1);
            printf("\n\n");
            break;
        
        case 0:
            printf("%d",x);
            printf("\n\n");
            break;
        default:
            printf("Enter number IF you dont know what is number go to hell");
    }

    return 0;
}