#include<stdio.h>
int main()
{
	int num1,num2,num3,sum,product,average;
	printf("Enter the value of nums: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	sum = num1 + num2 + num3;
	product = num1 * num2 * num3;
	average = (num1 + num2 + num3)*1/3;
	printf("sum=%d,\nproduct=%d,\naverage=%d",sum,product,average);
}
