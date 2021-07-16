#include<stdio.h>
int main()
{
	printf("int is %d bytes",sizeof(short int));
	printf("\nlong int is %d bytes",sizeof(long int));
	printf("\nfloat is %d bytes",sizeof(float));
	printf("\ndouble is %d bytes",sizeof(double));
	printf("\nlong double is %d bytes",sizeof(long double));
	printf("\nchar is %d bytes",sizeof(char));
}
