#include<stdio.h>

int main()
{
	int a = 0;
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 0; j < i; j++)
		{
			printf("%d ", (i + j));
		}
		printf("\n");
	}
}
