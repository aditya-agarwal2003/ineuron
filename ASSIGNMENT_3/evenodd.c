#include <stdio.h>
int main() {
    int num;
printf("\n\n\n\n\nName : Chaman \n");
printf("Roll no. :  \n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.\n\n\n", num);
    else
        printf("%d is odd.\n\n\n", num);
    
    return 0;
}
