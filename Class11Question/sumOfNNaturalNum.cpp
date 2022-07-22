#include<stdio.h>
int main()
{
	int i , n , sum = 0;
	printf("Enter the range of natural number : ");
	scanf("%d", &n);
	
//	for( i = 1; i <= n; i++)
//	{
//		sum += i;
//
//	}
//printf("The sum of %d natural numbers is : %d", n , sum);
    
    while( n != 0)
    {
    	sum += n;
    	n--;
	}
	printf("The sum  is : %d", sum);
	return 0;
	
}
