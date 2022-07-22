//addition in 2D array
#include<stdio.h>
int main()
{
	int row , col;
	printf("Enter the size of row and column\n");
	scanf("%d%d", &row , &col);
	int a[row][col] , b[row][col] , sum[row][col];
	
//	for reading the element of a
    printf("Enter elements of first matrix\n");
    for( int i = 0 ; i < row ; i++)
    {
    	for( int j = 0 ; j < col ; j++)
    	{
    		scanf("%d", &a[i][j]);
		}
	}
	
	//	for reading the element of b
	printf("Enter elements of second matrix\n");
    for( int i = 0 ; i < row ; i++)
    {
    	for( int j = 0 ; j < col ; j++)
    	{
    		scanf("%d", &b[i][j]);
		}
	}
	
	//	for sum
    for( int i = 0 ; i < row ; i++)
    {
    	for( int j = 0 ; j < col ; j++)
    	{
    		sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	//	for displaying the matrix of a
	printf("First matrix\n");
    for( int i = 0 ; i < row ; i++)
    {
    	for( int j = 0 ; j < col ; j++)
    	{
    		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	//	for displaying the matrix of b
	printf("Second matrix\n");
    for( int i = 0 ; i < row ; i++)
    {
    	for( int j = 0 ; j < col ; j++)
    	{
    		printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	//	for displaying sum
	printf("sum matrix\n");
    for( int i = 0 ; i < row ; i++)
    {
    	for( int j = 0 ; j < col ; j++)
    	{
    		printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
}
