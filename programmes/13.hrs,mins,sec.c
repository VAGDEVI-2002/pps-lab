#include<stdio.h>
int main()
{
	int sec=7200,hrs,mins;
	//printf("Enter the value of sec: ");
	//scanf("%d",&sec);
	hrs = sec/3600;
	mins = sec/60;
	printf("hrs=%d,\nmins=%d",hrs,mins);
	return 1;
}
