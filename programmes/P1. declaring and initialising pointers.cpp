#include<stdio.h>
int main()
{
	int i;
	int *ptr;
	ptr = &i;
	scanf("%d",&*ptr);
	printf("%d",*ptr);
}
