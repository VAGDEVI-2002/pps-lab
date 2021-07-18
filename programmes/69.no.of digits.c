 #include<stdio.h>
 int main()
 {
 	int num,count=0;
 	printf("enter the value of num: ");
 	scanf("%d",&num);
 	while(num>0)
 	{
 		printf("%d",count);
		num = num / 10;
		count++;  
	 }
	printf("\ncount=%d",count); 

	 
 	
 }
