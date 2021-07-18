#include<stdio.h>
int main()
{
	int num;
	printf("Enter: ");
	scanf("%d",&num);
	if (num>0)
	printf("\nnum is positive\n");
	if (num<0)
	printf("\nnum is negative\n");
	if (num==0)
	printf("\nnum is zero\n");
}
