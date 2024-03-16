/*
7.	Write a program in C to display the n terms of odd natural number and their sum .
	Test Data
		Input number of terms : 10
	Expected Output :
		The odd numbers are :1 3 5 7 9 11 13 15 17 19
		The Sum of odd Natural Number upto 10 terms : 100
*/

#include<stdio.h>
main()
{
	int a,n,i,sum=0,count;
	printf("Enter Numberof terms : ");
	scanf("%d",&a);
	
	printf("The odd numbers are : \t");
	for(i=1;i<=a;i++)
	{
		n=i*2-1;
		printf("%d\t",n);
		sum=sum+n;
	}
}
