#include<stdio.h>
int main()
{
	int num,msb;
	printf("enter the value of num: ");
	scanf("%d",&num);
	if(num&msb)
	printf("MSB of %d is set(1)",num);
	else
	printf("MSB of %d is unset(0)",num);
}
