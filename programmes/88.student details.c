#include<stdio.h>
struct sds
{
	int rno;
	char name[20];
	float marks;
}s;
int main()
{
	struct sds s;
	printf("\n enter roll no: ");
	scanf("%d",&s.rno);
	printf("\n enter name: ");
	scanf("%s",&s.name);
	printf("\n enter the marks: ");
	scanf("%f",&s.marks);
	printf("\n rno=%d \nname=%s \nmarks=%0.1f",s.rno,s.name,s.marks);
	
	
	
}

