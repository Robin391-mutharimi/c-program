/*
Name:Robin mutharimi
Reg No:CT101/G/26555/25
Date:25/09/2025
Description:Program to calculate volume and surface area of a cylinder
*/

#include<stdio.h>
#include<math.h>
#define Pi 3.1459

int main()
{
	float radius,height,volume,surface_area;
	
	printf("Enter radius:");
	scanf("%f",&radius);
	
	printf("Enter height:");
	scanf("%f",&height);
	
	volume=Pi*radius*radius*height;
	surface_area=2*Pi*radius*(radius+height);
	
	printf("volume is %.4f\n",volume);
	printf("surface_area is %4.f\n",surface_area);
	return 0;
}