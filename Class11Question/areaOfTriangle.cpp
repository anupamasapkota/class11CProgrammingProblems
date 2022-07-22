//to read base ang height and calculate area of triangle
#include<stdio.h>
int main()
{
	float base , height , area;
	printf("Enter base and height :\n");
	scanf("%f%f",&base ,&height);
	area=base/2*height;
	printf("The area of triangle is : %.2f",area);
	return 0;
}
