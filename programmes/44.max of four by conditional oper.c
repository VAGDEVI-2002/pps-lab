#include<stdio.h>
int main()
{
	int num1 , num2 , num3,num4,maxofnum1and2,maxofnum3and4, maxoffour;
	printf("Enter 4numbers:");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
	maxofnum1and2 = (num1>num2)?num1:num2;
	maxofnum3and4 = (num3>num4)?num3:num4;
	maxoffour = (maxofnum1and2 > maxofnum3and4)?maxofnum1and2:maxofnum3and4;
	printf("Maximum of 4 numbers is %d",maxoffour); 
	
}
