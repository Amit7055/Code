/*
4.	Write a program in C to read 10 numbers from keyboard and find their sum and average.
		Test Data :
		Input the 10 numbers : 
		Number1 : 2
			.
			.
			.
		Number10 :25
		Expected Output :
			The sum of 10 no is : 55 The Average is : 5.500000
*/

#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	
	float avg;
	
	printf("Using While loop:\n");
	
	while(i<=10)
	{
		printf("Enter number %d : ",i);
		scanf("%d",&n);
		sum=sum+n;
		i++;
	}
	
	printf("\nThe sum of given ten numbers are : %d",sum);
	
	avg=(float)sum/10;
	
	printf("\nThe average of given ten numbers are : %.2f",avg);
	
	printf("\n---------------------------------------------");
	
	printf("\nUsing For loop:\n");
	
	sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter number %d : ",i);
		scanf("%d",&n);
		sum=sum+n;
	}
	
	printf("\nThe sum of given ten numbers are : %d",sum);
	
	avg=(float)sum/10;
	
	printf("\nThe average of given ten numbers are : %.2f",avg);
	
}
