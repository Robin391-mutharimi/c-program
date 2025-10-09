/*
Name:Robin Mutharimi
Description:a program for bank withdrwals
*/
#include <stdio.h>
Reg No:CT101/G/26555/25
Date:09/10/2025
int main()
{
	float balance,withdraw;
	
	printf("eneter initial account balance:");
	scanf("%f",&balance);
	
	while(balance>0){
		printf("eneter amount to withdraw:");
		scanf("%f",&withdraw);
		
		balance-=withdraw;
		
		if(balance>0){
			printf("remaining balance:%.2f\n",balance);
		}
		else{
			printf("balance is now zero.\n",balance);
		}
	}
	return 0;
}