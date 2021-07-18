#include<stdio.h>
int main()
{
	int num1 , num2 , maxoftwo;
	printf("Enter the value of nums:");
	scanf("%d%d",&num1,&num2);

    maxoftwo =(num1 > num2)? num1:num2;
    printf("Maximum of two numbers is %d",maxoftwo);
		
	return 0;
    
}
