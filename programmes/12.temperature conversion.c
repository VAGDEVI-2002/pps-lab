#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the value of f: ");
	scanf("%f",&f);
	c = (f-32) * 5/9;
	printf("%f",c);
	return 1;
}
