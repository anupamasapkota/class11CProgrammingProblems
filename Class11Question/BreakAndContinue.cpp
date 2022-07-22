/*
This program illustrates the keyword of break and continue
*/

#include <stdio.h>

int main()
{
	int a,b;
	for(int i = 1; i <= 3; i++)
	{
		
		printf("Enter the value of a and  b : ");
		scanf("%d%d", &a, &b);
		
		if(a > b){
			printf("%d is greater than %d\n", a, b);
			continue;
		}
		
		printf("\nSagar");
		printf("\nAnu\n");
	}
	
	printf("\nAmar");
	printf("\nSamjhana");
}
