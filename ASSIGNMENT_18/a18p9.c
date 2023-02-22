//Write a function to reverse a string word wise. (For example if the given string is
//“Mysirg Education Services” then the resulting string should be “Services Education
//Mysirg” )
#include<stdio.h>
void swap();
void swap(char a[],int i,int j)
{
	char temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;

}



int main()
{
	char a[] = swap("my name is aditya");
	int i,j;

	while ()


	return 0;
}