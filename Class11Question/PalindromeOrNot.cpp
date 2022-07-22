#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n ;
	
	printf("Enter the number of word : ");
	scanf("%d", &n);
	char str[n];
	char str2[n];
	
	printf("Enter the word : ");
	scanf("%s", &str);
	
	strcpy(str2 , str );
	strrev(str2);
	
	if( strcmp(str , str2) == 0)
		{
			printf("The word is palindrome");
		}
	else
		{
			printf("The word is not palindrome");	
		}	
	
	
	return 0;	
	
}
