#include<stdio.h>
int main()
{
	int marks[5], sum = 0 , i = 0;
	float average;
	while ( i<5)
	{ 
	printf("Enter marks of %d student = ", i+1);
	scanf("%d",&marks[i]);
	i++;
	}
	
	 i=0;
	printf("The marks are:");
	while(i<5)
	{
	printf("marks[%d] = %d\n",i,marks[i]);
	sum+=marks[i];
	i++;
	}
	average = sum / 5;
	printf("The sum is : %d\n",sum);
	printf("The average is :%.2f",average);
	return 0;
}
