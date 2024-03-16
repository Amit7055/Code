/* 1.	Write a C program to accept two integers and check whether they are equal or not.
	Test Data: 15 15
	Expected Output:
	Number1 and Number2 are equal. */
		
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 1st Number :");
	scanf("%d",&a);
	printf("\nEnter 2nd Number :");
	scanf("%d",&b);
	if(a==b)
	{
		printf("\n%d and %d are equal.",a,b);
	}
	else
	{
		printf("\n%d and % are not equal.",a,b);
	}
}
