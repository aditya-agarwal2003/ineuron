//Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    /*if (a>b && a>c){
        printf("%d",a);
    }
    if (b>a && b>c){
        printf("%d",b);
    }
    if (c>a && c>b){
        printf("%d",c);
    }*/


    /*if (a>b && a>c){
        printf("%d",a);
    }
    else{
        if (b>a && b>c){
            printf("%d",b);
    }
        if (c>a && c>b){
            printf("%d",c);
    }
    }*/



    /*if (a>b && a>c){
        printf("%d",a);
    }
    else{
        if (b>a && b>c){
            printf("%d",b);
    }   else{
            if (c>a && c>b){
                printf("%d",c);
            }
        }
    }*/



     /*if (a>b && a>c)
        printf("%d",a);
    
    else{
        if (b>a && b>c)
            printf("%d",b);
        else 
            printf("%d",c);       //10 10 5 ---- 5 
    }*/



    /*if (a>b && a>c)
        printf("%d",a);
    
    else{
        if ( b>c)
            printf("%d",b);       //10 10 5 --- 10
        else 
            printf("%d",c);    
    }*/


    if (a>b && a>c)
        printf("%d",a);
    
    else if(b>c)
        printf("%d",b);       //10 10 5 --- 10      but here it is taking 4 calculations 
    else 
        printf("%d",c);    
    











    return 0;
}