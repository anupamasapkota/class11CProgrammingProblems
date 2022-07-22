//Program to show memory address of array element
#include<stdio.h>
int main()
{
	float a[4]={20,3,0.5,98.5};
	int i;
	printf("The contiguous memory locations are:\t");
	for(i=0;i<4;i++)
	{
		printf("\na[%d]=%f is located at %u",i,a[i],&a[i]);
	}
	return 0;
} 
