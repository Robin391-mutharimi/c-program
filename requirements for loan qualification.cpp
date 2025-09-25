/*
Name:Robin mutharimi
Reg No:CT101/G/26555/25
Date:25?09/2025
Description:program to compute customer's loan qualifications
*/
#include<stdio.h>
int main()
{
	int age;
	double income;
	
	printf("enter user's age:");
	scanf("%d",&age);
	
	printf("enter user's annual income:");
	scanf("%lf",&income);
	if(age>=21 && income >=2100){
      printf("congratulations you qualify for a loan.\n");
	}else{
      printf("unfortunately,we are unable to offer you a loam at this time.\n");
      
	}
	return 0;
}