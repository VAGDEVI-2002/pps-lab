#include<stdio.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	scanf("%d%d",&a,&b);
	printf("pointers after swapping are (%d , %d)",*ptr2,*ptr1);
}
