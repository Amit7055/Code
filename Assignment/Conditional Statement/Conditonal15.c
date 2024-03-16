/*
15.	Write a C program to check whether a 
triangle can be formed by the given value 
for the angles.
	Test Data:
	40 55 65
	Expected Output:
		The triangle is not valid. 
*/

#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter 1st angle : ");
	scanf("%d",&a);
	
	printf("Enter 2nd angle : ");
	scanf("%d",&b);
	
	printf("Enter 3rd angle : ");
	scanf("%d",&c);
	
	d=a+b+c;
	
	if(d==180)
	{
		printf("The triangle is valid.");
	}
	else
	{
		printf("The triangle is not valid.");
	}
}
