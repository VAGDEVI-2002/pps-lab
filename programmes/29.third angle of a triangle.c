#include<stdio.h>
int main()
{
	float A,B,C;
	printf("enter the two angles of a triangle: ");
	scanf("%f%f",&A,&B);
	C = 180 - (A+B);
	printf("the third angle of a triangle is %f",C);
	
}
