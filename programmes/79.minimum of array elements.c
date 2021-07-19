#include<stdio.h>
int main()
{
	int A[10],i,min;
	printf("enter the numbers  ");
	min=100000;
	for (i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
        min=min>A[i]?A[i]:min;
		
	}
	printf("\nmin =%d",min);
	
}
