#include<stdio.h>
int main()
{
	int P,T,R;
	float SI;
	printf("Enter the values: ");
	scanf("%d%d%d",&P,&T,&R);
	SI = P*T*R*0.01;
	printf("%f",SI); 
	return 0;
	
}
