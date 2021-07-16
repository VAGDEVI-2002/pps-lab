#include<stdio.h>
int main()
{
	int year,months,weeks,days;
	printf("enter the value of days: ");
	scanf("%d",&days);
	year = days/365;
	months = days/30;
	weeks = days/7;
	printf("year=%d,\nmonths=%d,\nweeks=%d",year,months,weeks,days);
	return 1;
	 
}
