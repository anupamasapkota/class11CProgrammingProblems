#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{ 
	char ch[16] = "Anupama Sapkota";
	int count = 0;
	
	for(int i = 0; i < strlen(ch); i++)
	{
		if(ch[i] != 32){
			count++;
		}		
	}
	printf("%d", count);
	return 0;
}
