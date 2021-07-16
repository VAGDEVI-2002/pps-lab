#include<stdio.h>
int main()
{
	int num,digits;
	printf("enter the values of num: ");
	scanf("%d",&num);
	digits = (num/10)/10;
	printf("\nexclusion of last two digits is %d\n",digits);
	
}
