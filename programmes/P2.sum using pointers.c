#include<stdio.h>
int main()
{
	
   int a,b,c;
   int *ptr1,*ptr2,*ptr;
   ptr1=&a;
   ptr2=&b;
   scanf("%d%d",&a,&b);
   c=a+b;
   ptr=&c;
   printf("%d",*ptr);
}
