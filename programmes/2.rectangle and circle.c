#include<stdio.h>
int main()
{
	float area,perimeter,l=2,b=3;
	area = l * b;
	perimeter = 2*(l+b);
	printf("area of rectangle = %f,\n perimeter of rectangle = %f",area,perimeter,l,b);
	float r=5;
	area = 3.14*r*r;
	perimeter = 2*3.14*r;
	printf("\n area of circle = %f,\n perimeter of circle = %f",area,perimeter,r);
	return 1;
	
	
}
