#include<stdio.h>
int main()
{
	int day;
	printf("enter day: ");
	scanf("%day",&day);
	switch(day)
	{
		case 1:printf("day 1 is monday");
		    break;
		case 2:printf("day 2 is tuesday");
		    break;
		case 3:printf("day 3 is wednesday");
		    break;
		case 4:printf("day 4 is thursday");
		    break;
		case 5:printf("day 5 is friday");
		    break;
		case 6:printf("day 6 is saturday");
		    break;
		case 7:printf("day 7 is sunday");
		    break;
		default:printf("repeated day");    
							    
	}
	
}
