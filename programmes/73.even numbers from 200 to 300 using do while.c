#include<stdio.h>
int main()
{
	int num;
	num=200;
	do
	{
		if(num%2==0)
		printf("\t%d",num);
		num+=1;
	}
	while(num<=300);
}
