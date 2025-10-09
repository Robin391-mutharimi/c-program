/*
Name:Robin mutharimi
Reg No:CT101/G/26555/25
Date:09/10/2025
Description:A program to prompt the user to enter the password
*/
#include<stdio.h>

int main()
{
	int password;
	
	do{
		printf("enter password:");
		scanf("%d",&password);
		
		if(password=1234)
			printf("incorrect password.try again.\n");
	}
	while(password=1234);
	printf("acces granted\n");
	return 0;
}