/* 3. Write a program scan age of person and print person is major or minor. */

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the your age: ");
	scanf("%d",&a);
	if(a>=18)
	printf("You are major:");
	else
	printf("You are minor:");
}
