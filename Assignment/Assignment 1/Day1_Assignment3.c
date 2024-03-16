/* 3.write a progam scan year and convert in days and month */

#include<stdio.h>
int main()
{
	int year,month,days;
	printf("Enter the number years:");
	scanf("%d",&year);
	
	month=year*12;
	days=year*365;

	printf("\n%d years into month is %d month",year,month);
	
	printf("\n%d years into days is %d days",year,days);
}
