/*19.	Write a program in C to read any Month Number in integer and display the number of days for this month.
	Test Data:
	7
	Expected Output:
		Month have 31 days*/
		
#include<stdio.h>
main()
{
	int a;
	
	printf("Enter any Month: ");
	scanf("%d",&a);
	
	if(a==1 ||a==3 ||a==5 || a==7 || a==8 || a==10 || a==12)
	{
		printf("Month %d has 31 days",a);
	}
	else if(a==2)
	{
		printf("Month %d has 28 or 29 days",a);
	}
	else if(a<0)
	{
		printf("Invalid month number");
	}
	else if(a>12)
	{
		printf("Invalid month number");
	}
}
