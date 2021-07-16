#include<stdio.h>
int main()
{
	float cm,m,km;
	printf("Enter the length in cm:");
	scanf("%f",&cm);
	m = cm/100.0;
	km = cm/10000.0;
	printf("m=%f,\nkm=%f",m,km);

	return 1;
}
