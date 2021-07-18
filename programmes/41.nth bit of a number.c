#include<stdio.h>
int main()
{
	int num,bit;
	printf("enter the value of num and bit: ");
	scanf("%d%d",&num,&bit);
	num = num >> (bit-1);
	if ((num&1)!=0)
	{
		printf("%d is set",bit);
	}
	else
	{
		printf("%d is reset",bit);
	}
}
