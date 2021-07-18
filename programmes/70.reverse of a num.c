#include<stdio.h>
int main()
{
	int num,rev=0;
	printf("enter the value of num: ");
	scanf("%d",&num);
	while(num>0)
	{
		rev = rev * 10 + num % 10;
		num = num / 10;
		
	}
	printf("reverse of num   is %d",rev);
}
