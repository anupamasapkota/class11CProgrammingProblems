// use find total and percentage
#include<stdio.h>
int main()
{
	int i;
	float  percent ;
	int total=0;
	int marks[5]={80,50,75,65,80};
	for(i=0; i<5; i++)
	{
		total+=marks[i];
	}
	percent = total/5;
	printf("The total is %d\t",total);
	printf("\nThe percentage is %.2f \t",percent);
	return 0;
}
