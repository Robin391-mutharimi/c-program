/*
Name:Robin Mutharimi
Reg No:CT101/G/26555/25
Date:09/10/2025
Description:A program for a guessing game
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int secret,guess,attempts=0;
	
	srand(time(0));
	secret=(rand()%20)+1;
	
	do{
		printf("enter your guess(1 to 20):");
		scanf("%d",&guess);
		attempts++;
		
		if(guess==secret)
			printf("congratulations!\n");
		
		else if(guess>secret)
			printf("too high!\n");
		
		else
			printf("too low!\n");
		}while(guess!=secret);
		printf("you guessed it in %d attempts.\n",attempts);
	
		return 0;
}