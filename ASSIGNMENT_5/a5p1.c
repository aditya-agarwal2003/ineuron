//Write a program to print MySirG N times on the screen

#include <stdio.h>
int main(){
    int n,i;
    printf("How many you want to print :  ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("%d MysirG",i);
        printf("\n");
    }
    return 0;
}