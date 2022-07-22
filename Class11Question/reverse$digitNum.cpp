//to reverse 4 digit number
#include<stdio.h>
int main()
{
	int reverse,rev,n;
	printf("Enter any 4 digit number\n");
	scanf("%d",&n);
	if(n>=1000 && n<=9999)
	{
		rev=0;
		while(n>0)
		{
			rev= n%10;
			reverse= reverse*10+rev;
			n=n/10;
		}
		printf("The reverse number is %d", reverse);
	}
	else
	{
		printf("It is not 4 digit number");
	}
	return 0;
}
