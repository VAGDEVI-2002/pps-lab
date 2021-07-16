#include<stdio.h>
int main()
{
	int distance;
	float fuel,avgconsumption;
	printf("distance travelled in km: ");
	scanf("%d",&distance);
	printf("fuel consumption in l: ");
	scanf("%f",&fuel);
	avgconsumption = distance/fuel;
	printf("avgvonsumption=%f",avgconsumption);
	return 1;
}
