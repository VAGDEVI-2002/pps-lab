#include<stdio.h>
int main()
{
	char character;
	printf("enter a character: ");
	scanf("%c",&character);
	(character>='0' && character<='9')?printf("character is a digit"):printf("character is not a digit");
}
