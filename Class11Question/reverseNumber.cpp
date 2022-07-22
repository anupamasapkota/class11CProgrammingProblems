#include<stdio.h>
int main()
{
	int rev=0;
	int num , digit;
	printf("Enter 4 digit nunber\n");
	scanf("%d",&num);
	while(num!=0)
	{
		digit= num%10;
		rev = rev * 10 + digit;
		num= num /10;
	}
	printf("the reverse num is %d\t",rev);
	return 0;
}
