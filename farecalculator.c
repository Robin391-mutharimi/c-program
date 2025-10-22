/*
Name:Robin Mutharimi
Reg No:CT101/G/26555/25
Description:A program to calculate fare
Date:22/10/2025
*/

#include<stdio.h>
float calculatefare(float distance);
int main()
{
	float distance,fare;
	
	printf("'enter distance travelled(in Kilometers):");
	scanf("%f",&distance);
	
	fare=calculatefare(distance);
	printf("Total fare=Ksh.%.2f\n",fare);
	return 0;
}
float calculatefare(float distance){
	return distance*50;
}