//to print multiplication table of input number by user
#include<stdio.h>
int main()
{
	int num , multiply,i ;
	printf("Enter a number: \n");
	scanf("%d",&num);
	printf("The multiplication of %d is\n",num);
    i=1;
    while (i<=10)
    {
    	multiply=num*i;
    	printf("%d*%d=%d\n",num, i, multiply);
    	i++;
	}
	return 0;
}
