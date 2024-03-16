/* 2.	Write a C program to check whether a given number is even or odd. 
	Test Data: 15
	Expected Output:
	15 is an odd integer. */
	
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:  ");
	scanf("%d",&a);
	if(a%2==0)
		printf("%d is a Even Number.",a);
	else
		printf("%d is a Odd Number.",a);
}
