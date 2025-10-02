/*
Name:Robin Muthharimi
Reg No:CT101/G/26555/25
Date:02/10/2025
Description:A program to check elegibility of exams 
*/
#include<stdio.h>
int main()
{
	int Attendance,average_marks;
	printf("enter Attendance:");
	scanf("%d",&Attendance);
	
	printf("enter average_marks:");
	scanf("%d",&average_marks);
	
	if(Attendance>=75&average_marks>=40){
		printf("you are eligible");
	}
	
	else
	{
		printf("not eligible");
	}
	return 0;
}