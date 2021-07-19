#include<stdio.h>
int main()
{
	int arr[15],num,i;
	printf("enter the num: ");
	for(i=0;i<15;i++)
	scanf("%d",&arr[i]);
	printf("enter the num: ");
	scanf("%d",&num);
	for(i=0;i<15;i++)
	{
	    if (num==arr[i])
	    {
	    	printf("num=%d is present in array", num);
		}
    }
}
