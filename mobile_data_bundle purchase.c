/*
Name:Robin mutharimi
Reg No:CT101/G/26555/25
Date:02/10/2025
Description:A program for mobile data bundle purchase
*/
#include<stdio.h>include

int main()
{
	int choice;
	
	printf("internet data bundles:\n");
	printf("1.100MB-50KES\n");
	printf("2.500MB-200KES\n");
	printf("3.1GB-350KES\n");
	printf("4.2GB-600KES\n");
	
	printf("enter your choice(1-4):");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
	printf("you selested 100MB for 50KES\n");
	break;
    case 2:
	printf("you selectef 500MB for 200KES\n");
	break;
    case 3:
    printf("you selected 1GB for 350KES\n");
    break;
    case 4:
    printf("you selected 2GB for 600KES\n");
    break;
	default:
    
    	printf("invalid choice.please select between 1 and 4.\n");
	}
	return 0;
}