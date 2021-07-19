#include<stdio.h>
	
int main()
{
	struct employee
{
	int ID;
	char name[20];
	float salary;
}s;
   printf("%d",sizeof(struct employee));
}
