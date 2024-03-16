/* 2.Write a program scan hours and convert in min and sec. */

#include<stdio.h>
int main()
{
	int hours,min,sec;
	
	printf("Enter the Hours:");
	scanf("%d",&hours);
	
	min=hours*60;
	sec=min*60;
	
	printf("\n%d hours in min = %d min",hours,min);
	printf("\n%d hours in sec = %d sec",hours,sec);
}
