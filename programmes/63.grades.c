#include<stdio.h>
int main()
{
	int physics,mathematics,PPS;
	float percentage;
	printf("enter the marks of three subjects: ");
	scanf("%d%d%d",&physics,&mathematics,&PPS);
	percentage =(physics+mathematics+PPS) / 3;
    if (percentage>=90)
    printf("grade A");
    else if (percentage>=80)
    printf("grade B");
    else if (percentage>=80)
    printf("grade C");
    else if (percentage>=60)
    printf("grade D");
    else if (percentage>=40)
    printf("grade E");
    else
    printf("grade F");
	
}
