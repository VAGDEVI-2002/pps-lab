#include<stdio.h>
int main()
{
	int n,A[10],*ptr;
	int i;
	printf("enter the value of n : ");
	scanf("%d",&n);
	ptr=&A[0];
	for (i=0;i<=n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&A[0];
	for (i=0;i<=n;i++)
	{
	printf("  %d   ",*ptr);
	ptr++;
}
	
	
}
