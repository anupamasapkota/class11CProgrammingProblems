#include<stdio.h>
int main()
{
	int i = 0;
	char str[100];
	
    printf("Enter text:\t");
    scanf("%s", str);
	while (str[i] != '\0')
	{
		str[i] = str[i] + 32;
		i++;
	}
	printf("%s", str);
	return 0;
}
