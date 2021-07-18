#include<stdio.h>
int main()
{
	char character;
	printf("enter a character: ");
	scanf("%c",&character);
	(character>=97 && character<=122) || (character>=65 && character<=90)?printf("alphabet"):printf("not an alphabet");
}
