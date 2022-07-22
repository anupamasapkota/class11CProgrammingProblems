#include<stdio.h>
int main()
{
	int i , n , fact = 1;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	for( i = 1; i <= n; i++)
	{
		fact *= i;

	}
printf("The factorial of %d is : %d", n , fact);
    
//    while( n != 0)
//    {
//    	fact *= n;
//    	n--;
//	}
//	printf("The factorial  is : %d", fact);
	return 0;
	
}
