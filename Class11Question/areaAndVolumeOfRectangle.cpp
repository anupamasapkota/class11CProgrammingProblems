 //to calculate area and and volume of rectangle 
 #include<stdio.h>
 int main()
 {
 	float volume , area , length ,bredth , height;
	 printf("Enter lenght :\t");
	 scanf("%f",&length) ;
	 printf("Enter bredth :\t");
	 scanf("%f",&bredth) ;
	 printf("Enter height :\t");
	 scanf("%f",&height) ;
	 area = length * bredth;
	 volume = area * height;
	 printf("the area of swimming pool is :%.2f\n",area);
	 printf("the volume of swimming pool is :%.2f\n",volume);
	 return 0;
 }
