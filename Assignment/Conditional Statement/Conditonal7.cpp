/* 7.	Write a C program to accept the height of a person in centimeter and categorize the person according to their height.
	Test Data: 135
	Expected Output:
		The person is Dwarf. */
		
#include<stdio.h>
int main()
{
	float a;
	printf("Enter person height in cm :");
	scanf("%f",&a);
	if(a>1 && a<=140)
	{
		printf("The person is Dwarf.");
	}
	else if(a>=141 && a<=170)
	{
		printf("The person height is Average.");
	}
	else if(a>171)
	{
		printf("The person is Tall.");	
	}
	else
	{
		printf("Enter valid height.");
	}
}
