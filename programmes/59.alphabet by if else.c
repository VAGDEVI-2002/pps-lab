#include<stdio.h>
int main()
{
	char ch;
	printf("enter the char:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=122)
	printf("the character is alphabet");
	else
	printf("not an alphabet");
}
