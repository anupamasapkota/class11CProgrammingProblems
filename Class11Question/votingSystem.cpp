//to know who can vote
#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age\n");
	scanf("%d",&age);
	if(age > 0 && age <18)
	{
		printf("Underage... not allowed to vote\n");
	}
	else if(age >= 18 && age <=120)
	{
		printf("have right to vote\n");
	}
	else
	{
		printf("Invalid age");
	}
	return 0;
}
