#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x,y,x1,x2;
	printf("enter the values of a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	y = a*x*x + b*x + c;
	x1 = -b+sqrt(b^2-4*a*c) / 2*a;
	x2 = -b-sqrt(b^2-4*a*c) / 2*a;
	printf("roots of a quadratic equation are %f,%f",x1,x2);
}
