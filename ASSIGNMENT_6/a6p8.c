    //Write a program to check whether a given n umber is a Prime number or
//not

#include <stdio.h>
int main(){
    int n,i,flag=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i=2;i <= n/2;i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        printf("Not prime");
        printf("\n");
    }
    else{
        printf("Prime");
        printf("\n");
    }


    return 0;
}
