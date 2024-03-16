/* 2.  Write a program scan year and print year is leap year or not. */

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the year: ");
	scanf("%d",&a);
	if(a%4==0)
	printf("%d year is an leap year:",a);
	else
	printf("%d year is not leap year:",a);
}
