/*
6.	Write a program in C to display the multiplication table of a given integer. 
	Test Data :
	Input the number (Table to be calculated) : 15
	Expected Output :
		15 X 1 = 15
			...
			...
		15 X 10 = 150
*/

#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("Using While loop:\n");
	
	printf("Enter number (Table to be calculated) : ");
	scanf("%d",&n);
	
	while(i<=10)
	{
		printf("\n%d\tX\t%d\t=\t%d ",n,i,n*i);
		i++;
	}
	
	
	printf("\n---------------------------------------------");
	
	printf("\nUsing For loop:\n");
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d\tX\t%d\t=\t%d ",n,i,n*i);
	}
	
}
