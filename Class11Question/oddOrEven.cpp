#include<stdio.h>
int main()
{
	int number;
	printf("Enter an integer number : ");
	scanf("%d", &number);
	
	if( number == 0)
	{
		printf("Invalid");
	}
	else if(number % 2 == 0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}
