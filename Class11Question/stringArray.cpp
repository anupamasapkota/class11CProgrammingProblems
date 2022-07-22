#include <stdio.h>
#include <string.h>

int main()
{
	
	char a[] = "Anupa";
	int len = strlen(a);
	
	printf("%d\n", strlen(a));
	char rev[len] , b[len];
	
	
	
	for(int i = 0; i <= le n; i++){
		b[i] = a[i];
	}
	
	
	printf("The string stored in array a : %s\n", a);
	printf("The string stored in array b : %s\n", b);
	
	strcpy(rev, strrev(b));

	
	printf("The string after copying from a  in rev  : %s\n", rev);
	
	if(strcmp(a , rev) == 0){
		printf("The word  is palindrome");
	}
	else{
		printf("The word is not palindrome");
	}
	return 0;
}
