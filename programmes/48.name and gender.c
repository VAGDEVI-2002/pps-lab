#include<stdio.h>
int main()
{
	char name[20],gender,male;
	printf("enter name and gender: ");
	scanf("%c%c",&name,&gender);
	(gender == male)?printf("mr.%c",name):printf("mrs.%c",name);
}
