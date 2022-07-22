// this program is to print the 2D Array
#include<stdio.h>
int main()
{
	int arr[2][3];
	int i , j, num = 1;
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
}
