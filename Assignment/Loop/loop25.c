/*
25.	Write a C program to determine whether a given number is prime or not. 
	Test Data :
		Input a number: 13
	Expected Output :
		13 is a prime number.
*/

#include<stdio.h>
main()
{
	int n,i,flag=1;
	printf("\nEnter Number : ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not prime number",n);
	}
}
