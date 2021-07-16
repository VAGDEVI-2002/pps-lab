#include<stdio.h>
int main()
{
	float  salary,hra,da,gs;
	printf("enter the salary: ");
	scanf("%f",&salary);
	hra = salary * (20/100.00);
	da = salary * (40/100.00);
	gs = salary + hra + da;
	printf("gross salary = %f\n",gs);
}
