/*1.Write a program scan one number and update that number with orignal value plus half value of orignal value
(use single variable)*/

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number:");
	scanf("%d",&a);
	printf("%d + %d/2 = %d",a,a,a+a/2);
}
