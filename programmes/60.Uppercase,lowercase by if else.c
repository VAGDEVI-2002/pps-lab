#include<stdio.h>
int main()
{
	char ch;
	printf("enter the char:");
	scanf("%c",&ch);
	if (ch>=65 && ch<=90)
	printf("the char is uppercase");
	if (ch>=97 && ch<=122)
	printf("the char is lowercase");
}
