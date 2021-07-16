#include<stdio.h>
#include<math.h>
int main()
{
	int n,floorofnum,ceilofnum;
	float num,squareofnum,cubeofnum,powerofnum,sqrtofnum;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the value of num: ");
	scanf("%f",&num);
	squareofnum = num * num;
	cubeofnum = num * num * num;
	powerofnum = pow(num,n);
	sqrtofnum = sqrt(num);
	floorofnum = floor(num);
	ceilofnum = ceil(num);
	printf("\nsquareofnum = %f\ncubeofnum = %f\npowerofnum = %f\nsqrtofnum = %f\nfloorofnum = %d\nceilofnum = %d",squareofnum,cubeofnum,powerofnum,sqrtofnum,floorofnum,ceilofnum);
}
