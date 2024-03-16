/*
5.	Write a program in C to display the cube of the number upto given an integer.
	Test Data :
	Input number of terms : 5
	Expected Output :
		Number is : 1 and cube of the 1 is :1 
		Number is : 2 and cube of the 2 is :8 
		Number is : 3 and cube of the 3 is :27 
		Number is : 4 and cube of the 4 is :64 
		Number is : 5 and cube of the 5 is :125

*/

#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("Using While loop:\n");
	
	printf("Enter number of terms  : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("\nNumber is : \t%d and cube of %d is : \t%d",i,i,i*i*i);
		i++;
	}
	
	
	printf("\n---------------------------------------------");
	
	printf("\nUsing For loop:\n");
	
	for(i=1;i<=n;i++)
	{
		printf("\nNumber is : \t%d and cube of %d is : \t%d",i,i,i*i*i);
	}
	
}
