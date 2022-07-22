//to print multiplication table of input number by user
#include<stdio.h>
int main()
{
	int num ,i ;
	printf("Enter a number: \n");
	scanf("%d",&num);
	printf("The multiplication of %d is\n",num);
    for (i=1;i<=10;i++)
    {
//    	multiply=num*i;
    	printf("%d*%d=%d\n",num, i, (num*i));
	}
	return 0;
}
