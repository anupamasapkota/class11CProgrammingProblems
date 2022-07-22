#include<stdio.h>
int main()
{
   int i , marks[10] , count = 0;
   for(i = 0; i < 10; i++)
   {
   	printf("Enter the marks of %d student " ,i+1);
	scanf("%d" , &marks[i]);	
   }
   
	for(i = 0; i < 10; i++)
   {
   	if(marks[i] >= 80)
	   count ++;	
   }
   
   printf("%d students have marks greater than or equal 80", count);
   
   return 0;

}
