#include<stdio.h>
int main()
{
	int num1 , num2 , num3, maxofthree;
	printf("Enter the value of numbs:");
	scanf("%d%d%d",&num1,&num2,&num3);
	maxofthree = ((num1 > num2)?((num1 > num3)?num1:num3):((num2>num3)?num2:num3));
	printf("Maximum number is %d",maxofthree);	
	
}
