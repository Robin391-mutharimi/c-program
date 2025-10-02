/*
Name:Robin Mutharimi
Reg No:CT101/G/26555/25
Date:02/10/2025
Description:A program to calculate water bill
*/
#include<stdio.h>

int main()
{
	int water_units;
	float water_bill;
	printf("enter water_units:");
	scanf("%d",&water_units);
	
	
	if(water_units<=30){
		water_bill=water_units*20;
	}
	else if(water_units<=60){
		water_bill=water_units*25;
	}
	else if(water_units>60){
		water_bill=water_units*30;}
	printf("total water bill:%.2fKES\n", water_bill);
	
	return 0;
}
