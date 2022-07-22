/*
Declartion Part
This is a program for demonstrating simple calculator operation
*/

#include <stdio.h>

int main()
{
	int ch;
	int a ,b;
	
	printf("Enter the value of a and  b : ");
	scanf("%d%d", &a, &b);
	
	printf("\n1.Addition\n2.Substration\n3.Multiply\n4.Division\n\n");
	
	printf("Select one of the option given above : ");
	scanf("%d", &ch);
	
	switch(ch)
	{
		case 1:
			printf("Sum is : %d\n",(a*b));
			break;
		
		case 2:
			printf("Difference is : %d\n",(a-b));
			break;
			
		case 3:
			printf("Multiplication is : %d\n",(a*b));
			break;
			
		case 4:
			printf("Division is : %d\n",(a/b));
			break;
			
		default :
			printf("Invalid Selection of operator\n");
	}
	
}
