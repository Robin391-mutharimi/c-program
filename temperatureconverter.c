/*
Name:Robin Mutharimi
Reg No:CT101/G/26555/25
description:A program to
Date:22/10/2025
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit);

int main()
{
	float fahrenheit,celsius;
	printf("enter temparature in fahrenheit:");
	scanf("%f",&fahrenheit);
	
	celsius=convertToCelsius(fahrenheit);
	printf("Temparature in celsius=%.2f°C\n",celsius);
	
	return 0;
}

float convertToCelsius(float fahrenheit){
	return(fahrenheit-32)*5.0/9.0;
}