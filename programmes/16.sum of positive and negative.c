#include<stdio.h>
int main()
{
	int a,b,c,d,e,psum=0,nsum=0;
	printf("enter the values of int: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>0)
	psum += a;
	else
	nsum += a;
	if (b>0)
	psum += b;
	else
	nsum += b;
	if (c>0)
	psum += c;
	else
	nsum += c;
	if (d>0)
	psum += d;
	else
	nsum += d;
	if (e>0)
	psum += e;
	else
	nsum += e;
	printf("psum=%d,\nnsum=%d",psum,nsum);
}
