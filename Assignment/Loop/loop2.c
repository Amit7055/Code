/*
2.	Write a C program to find the sum of first 10 natural numbers.
	Expected Output :
		The first 10 natural number is :
		1 2 3 4 5 6 7 8 9 10
		The Sum is : 55
*/

#include<stdio.h>
main()
{
	int i=1,sum=0;
	
	printf("Using While loop:\t");
	
	while(i<=10)
	{
		printf("%d\t",i);
		sum=sum+i;
		i++;
	}
	
	printf("\nThe Sum is :\t%d",sum);
	
	printf("\n-----------------------------------------");
	
	sum=0;
	
	printf("\nUsing For loop:\t\t");
	
	for(i=1;i<=10;i++)
	{
		printf("%d\t",i);
		sum=sum+i;
	}
	
	printf("\nThe Sum is :\t%d",sum);
}
