#include<stdio.h>
int main()
{
	int marks,totalmarks;
	printf("enter the marks,totalmarks: ");
	scanf("%d%d",&marks,&totalmarks);
	if (marks*100/totalmarks <= 40)
	printf("failed");
	else if (marks*100/totalmarks <= 60)
	 printf("second class");
	else if (marks*100/totalmarks <=70)
	 printf("first class");
	else
	printf("distinction");  
}
