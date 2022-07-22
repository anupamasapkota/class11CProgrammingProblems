//using switch statement to find days of a week
#include<stdio.h>
int main()
{
	char days;
	printf("Enter number from a to g : \n");
	scanf("%c",&days);
	switch(days)
	{
		case 'a':
			printf("Today is sunday");
			break;
	    case 'b':
			printf("Today is monday");
			break;
		case 'c':
			printf("Today is tuesday");
			break;
		case 'd':
			printf("Today is wednesday");
			break;
		case 'e':
			printf("Today is thursday");
			break;
		case 'f':
			printf("Today is friday");
			break;
		case 'g':
			printf("Today is saturday");
			break;
		defult:
			printf("Invalid character... try again");
			
	}
	return 0;
}
