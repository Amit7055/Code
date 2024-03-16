/* 1. Write a program scan age and print person is minor. */

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the your age: ");
	scanf("%d",&a);
	if(a>=18)
	printf("You are not minor:");
	else
	printf("You are minor:");
}
