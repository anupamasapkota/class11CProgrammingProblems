#include<stdio.h>
int main()
{
	int paisa , rupaiya;
	printf("Enter the amount in paisa : ");
	scanf("%d", &paisa);
	
    rupaiya = paisa / 100;
    paisa = paisa % 100;
    printf("The amount is %d rupaiya and %d paisa.", rupaiya , paisa);
    
	return 0;
}
