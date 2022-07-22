//To read the radius of circle and calculate area
#include<stdio.h>
int main()
{
	int radius;
	float areaOfCircle;
	float PI = 3.14;
	printf("Enter the radius:\n ");
	scanf("%d",&radius);
	areaOfCircle = PI * radius * radius;
	printf("the area of circle is : %.2f",areaOfCircle);
	return 0;
}
