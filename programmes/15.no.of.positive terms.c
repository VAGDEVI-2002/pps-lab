#include<stdio.h>
int main()
{
	int a,b,c,d,e,pcount=0,ncount=0;
	printf("Enter the values: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if (a>0)
	pcount+=1;
	else
	ncount+=1;
	if (b>0)
	pcount+=1;
	else
	ncount+=1;
	if (c>0)
	pcount+=1;
	else
	ncount+=1;
	if (d>0)
	pcount+=1;
	else
	ncount+=1;
	if (e>0)
	pcount+=1;
	else
	ncount+=1;
	printf("positive numbers = %d\nnegative numbers = %d",pcount,ncount);
	
	
}
