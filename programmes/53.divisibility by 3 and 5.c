#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num: ");
	scanf("%d",&num);
	if (num%3==0)
	printf("\nnum is divisible by 3\n");
	if (num%5==0)
	printf("\nnum is divisible by 5\n");
	if (num%3==0 && num%5==0)
	printf("\nnum is divisible by both 3 and 5\n");
	
}
