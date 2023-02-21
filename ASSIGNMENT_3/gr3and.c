    /*

     * C program to find the largest  of three numbers

     */

    

    #include <stdio.h>
    int main()
    {
        int a, b, c;
printf("\n\n\n\n\nName : Chaman\n");
printf("Roll no. : 25023 \n");
        printf("Enter three numbers: \na: ");
        scanf("%d", &a);
        printf("b: ");
        scanf("%d", &b);
        printf("c: ");
        scanf("%d", &c);
        if(a>b)
        {
            if(a>c)
            {
                printf("%d is greatest\n\n\n\n\n",a);
            }
            else{
                printf("%d is greatest\n\n\n\n",c);
            }
        }
        else{
            if(b>c)
            {
                printf("%d is greatest\n\n\n\n",b);
            }
            else{
                printf("%d is greatest\n\n\n\n",c);
            }
        }

        return 0;

    }