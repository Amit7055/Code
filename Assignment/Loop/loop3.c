/*
3.	Write a program in C to display n terms of natural number and their sum. 
	Test Data : 7
	Expected Output :
		The first 7 natural number is :
		1 2 3 4 5 6 7
		The Sum of Natural Number upto 7 terms : 28
*/


#include<stdio.h>
main()
{
	int i=1,sum=0,n;
	
	printf("Test Data:\t");
	scanf("%d",&n);
	
	printf("\nUsing While loop:\t");
	
	printf("\nThe first 7 natural number is:\n");
	
	while(i<=n)
	{
		printf("%d\t",i);
		sum=sum+i;
		i++;
	}
	
	printf("\nThe Sum of Natural Number upto %d terms :\t%d",i,sum);
	
	printf("\n-----------------------------------------");
	
	sum=0;
	
	printf("\nUsing For loop:\t\t");
	
	printf("\nThe first 7 natural number is:\n");
	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
		sum=sum+i;
	}
	
	printf("\nThe Sum of Natural Number upto %d terms :\t%d",i-1,sum);
}
