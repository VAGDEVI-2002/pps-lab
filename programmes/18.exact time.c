#include<stdio.h>
int main()
{
	int hrs,min,sec,output;
	printf("enter the value of sec: ");
	scanf("%d",&sec);
	hrs = sec/3600;
	min = (sec%3600)/60;
	sec = ((sec%3600)%60);
	printf("%d:%d:%d",hrs,min,sec,output);
	return 1;
}
