#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	if(num&1)
	printf("\nnum is odd",num);
	else 
	printf("\nnum is even",num);
	
	return 0;
}
