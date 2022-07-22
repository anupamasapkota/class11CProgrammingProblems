#include<stdio.h>
int sum();
int main()

{
	printf("The sum is %d", sum());
	return 0;
}

int sum()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a , &b);
	return(a+b);
}
