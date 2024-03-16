/* 14.	Write a C program to check whether a triangle is 
Equilateral, Isosceles or Scalene.
	Test Data:
	50 50 60
	Expected Output:
		This is an isosceles triangle. */

/*An equilateral triangle has 3 equal 
angles. An isosceles triangle has 2 
equal angles. A scalene triangle has 
3 different angles.*/

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter 1st angle : ");
	scanf("%d",&a);
	
	printf("Enter 2nd angle : ");
	scanf("%d",&b);
	
	printf("Enter 3rd angle : ");
	scanf("%d",&c);

	if(a==b && b==c && c==a)
	{
		printf("Triangle is an Equilateral Triangle.");
	}
	
	else if(a!=b && b!=c && c!=a)
	{
		printf("Triangle is an Isosceles Triangle.");
	}
	
	else 
	{
		printf("Triangle is an Scalene Triangle.");
	}
}
