#include<stdio.h>
int main()
{
	float year,months,weeks,days;
	printf("enter the value of days: ");
	scanf("%f",&days);
	year = days/365;
	months = days/30;
	weeks = days/7;
	printf("year=%f,\nmonths=%f,\nweeks=%f",year,months,weeks,days);
	return 1;
	 
}
