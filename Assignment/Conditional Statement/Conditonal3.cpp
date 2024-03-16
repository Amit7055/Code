/* 3.Write a C program to check whether a given number is positive or negative.
	Test Data: 15
	Expected Output:
	15 is a positive number */
	
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number :");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("%d is an Positive Number.",a);
	}
	else
	{
		printf("%d is an Negative Number.",a);		
	}
}
