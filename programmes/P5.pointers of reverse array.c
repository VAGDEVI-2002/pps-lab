#include<stdio.h>
int main()
{
	int A[10],i,n,*ptr=NULL;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	ptr=&A[0];
	for (i=0;i<=n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=&A[n-1];
	for (i=n-1;i>=0;i--)
	{
		printf("  %d  ",*ptr);
		ptr--;
	}
}
