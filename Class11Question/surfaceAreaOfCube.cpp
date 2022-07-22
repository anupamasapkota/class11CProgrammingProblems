//To calculate the surface area of cube
#include<stdio.h>
int main()
{
	int a,surface_area;
	printf("Enter the edge:\n ");
	scanf("%d",&a);
	surface_area = 6 * a * a;
	printf("the surface area of cube is : %d",surface_area);
	return 0;
}
