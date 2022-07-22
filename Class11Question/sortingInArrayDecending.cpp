#include<stdio.h>
int main()
{
	int n , temp , i , j;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	
	int integer[n];
	printf("Enter numbers :\n");
	
	for( i = 0; i < n; i++)
	{
		scanf("%d" , &integer[i]);
	}
	
	printf("Number in decending order:\n");
	for( i = 0; i < n  ; i++)
	{
		for( j = (i + 1); j < n; j++)
		{
			if(integer[i] < integer[j])
			{
				temp = integer[j];
				integer[j] = integer[i];
				integer[i] = temp;
			}
			
		}
		printf("%d", integer[i]);
	}
}
