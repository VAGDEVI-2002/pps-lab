#include<stdio.h>
int main()

{
	int num1,num2,result;
	printf("enter the numbers: ");
	scanf("%d%d",&num1,&num2);
	switch(num1,num2,result)
	{
		case 1:printf("addition - (+)");
		    result=num1+num2;
			break;
		case 2:printf("subraction - (-)");
		    result=num1-num2;
		    break;
		case 3:printf("multiplication - (*)");
		    result=num1*num2;
			break;
		case 4:printf("division - (/)");
		    result=num1/num2;
			break;	    
	}
	printf("result=%d",result);
} 
