//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include<stdio.h>
int main()
{
        char str[100];
        int i=0,count_alphabet=0,count_digit=0,count_special_character=0;

        printf("\n\nEnter string : ");
        fgets(str,100,stdin);
        while (str[i] != '\0')
        {
            if (str[i] >= 97 && str[i] <= 122 ||str[i] >= 65 && str[i] <= 90)
            {
                count_alphabet++;

            }

            else if(str[i] >= 48 && str[i] <= 57)
            {
                count_digit++;

            }

            else if(str[i] >= 32 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126)
            {
                count_special_character++;

            }

          


            i++;
        }
        printf("\n\n");
        printf("Total alphabets in string are : %d\n",count_alphabet);
        printf("Total digit in string are : %d\n",count_digit);
        printf("Total Special Character in String are : %d\n",count_special_character);
        printf("\n\n");



    return 0;
}