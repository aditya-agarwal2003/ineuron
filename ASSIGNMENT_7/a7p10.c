//Print armstrong between 1 to 1000.
#include<stdio.h>
#include<math.h>
int main()
{
    int i,count=0,sum=0,rem;
    for(i=1;i<=1000;i++)
    {   sum=0,count=0,rem=0;
        int x,y,z;
        x=i;
        y=i;
        z=i;
        while(x!=0)
        {
            x=x/10;
            count++;
        }
        while(y!=0)
        {
            rem=y%10;
            y=y/10;
            sum = sum + pow(rem,count); 
        }
        if(sum==z)
        {
            printf("%d ",sum);}
            
    }
    printf("\n");
    return 0;
}