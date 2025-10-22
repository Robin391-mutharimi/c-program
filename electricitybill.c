/*
NAME:Robin Mutharimi
REG NO:CT101/G/26555/25
DESCRIPTION:A program to compute electric bill
DATE:22/10/2025
*/
#include <stdio.h>

float ElectricBill(int units);
int main()
{
	int units;
	float bill;
	
	printf("enter number of units consumed:");
	scanf("%d",&units);
	bill=ElectricBill(units);
	printf("total bill=Ksh.%.2f\n",bill);
	return 0;
}

float ElectricBill(int units){
	float bill;
	if(units<=100)
		bill=units*10;
	else if(units<=200)
		bill=(100*10)+((units-100)*15);
	else
	bill=(100*10)+(100*15)+((units-200)*20);

return bill;
}