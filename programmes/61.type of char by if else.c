#include<stdio.h>
int main()
{
	char ch;
	printf("enter the char: ");
	scanf("%c",&ch);
	if (ch>=65 && ch<=122)
	printf("char is alphabet");
	if (ch>=0 && ch<=9)
	printf("char is digit");
	else
	printf("char is a special character");
}
