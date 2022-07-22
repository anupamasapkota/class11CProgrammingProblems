#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	
	 int a , b;
	 char calculator;

	 
	 printf("Enter the value of a and b : ");
	 scanf("%d%d", &a , &b);
	 
	 printf("\nEnter\n'+' for addition\n'-' for subtraction\n'*' for multiplication\n'/' for division\n");
	 
	 printf("Enter the operator for calculation : ");
	 scanf("%s", &calculator);
	
	 
	 switch(calculator)
	 {
	 	case '+' :	
	 		printf("The sum of %d and %d is %d", a , b , a+b);
	 		break;
	 		
		case '-' :
	 		printf("The subtraction of %d and %d is %d", a , b , a-b);
	 		break;
	 		
	 	case '*' :
	 		printf("The multiplication of %d and %d is %d", a , b , a*b);
	 		break;
	 		
	 	case '/' :
	 		printf("The division of %d and %d is %d", a , b , a/b);
	 		break;
	 		
	 	default : 
	 		printf("Invalid choice");
			 break;	
	 }
	 
	 return 0;
}
