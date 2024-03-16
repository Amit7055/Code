/* 5.	Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
	Test Data: 21
	Expected Output:
		Congratulation! You are eligible for casting your vote. */

#include<stdio.h>
int main()
{ 
    int a;
	printf("Enter your age: ");
	scanf("%d",&a);
	if(a>=18)
	printf("Congratulation! You are eligible for casting your vote.");
	else
	printf("Sorry! You are not eligible for casting your vote");	
}		
