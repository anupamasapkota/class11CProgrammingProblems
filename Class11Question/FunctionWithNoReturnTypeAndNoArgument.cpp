#include<stdio.h>
int sum();
int main()

{
	sum();
	return 0;
}

int sum()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a , &b);
	printf("The sum is %d", a+b);
}
