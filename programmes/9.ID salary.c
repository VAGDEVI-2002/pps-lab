#include<stdio.h>
int main()
{
	float ID,TWH,ARH,salary;
	printf("enter the values: ");
	scanf("%f%f%f",&ID,&ARH,&TWH);
	salary = ARH * TWH;
	printf("ID=%f:\nsalary=%f",ID,salary); 
}
