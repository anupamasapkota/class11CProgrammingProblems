#include<stdio.h>
int main()
{
	int row , col ,i , j;
	printf("Enter the size of row & column : \n");
	scanf("%d%d" , &row , &col);
	
	int	matrix[row][col] , transpose[col][row] ;
	
	printf("\nEnter the matri of % d * %d :\n", row, col);
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++) 
		{
			printf("matrix[%d][%d] = ", i, j);
			scanf("%d",&matrix[i][j]);	
		}	
	}
	
	
	printf("\nOutput of given matrix : \n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++) 
		{
		printf("%d ", matrix[i][j]);	
		}
		printf("\n");		
	}
	
	
	printf("\nTranspose of given matrix : \n");
	for(j = 0; j < col; j++)
	{
		for(i = 0; i < row; i++) 
			{
				transpose[j][i] = matrix[i][j];	
			}	
	}
	
//	
//	for(int i = 0 ; i < row; i++)
//	{
//		for(int  j = 0; j < col ; j++){
//			
//			printf("%d ", transpose[i][j]);
//		}
//		printf("\n");
//	}
	
	for(i = 0; i < col; i++)
	{
		for(j = 0; j < row; j++) 
		{
		printf("%d ", transpose[i][j]);	
		}
		printf("\n");		
	}
	
}
