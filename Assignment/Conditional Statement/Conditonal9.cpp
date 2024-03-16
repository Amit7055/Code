/* 9.	Write a C program to accept a coordinate point in a X and Y coordinate system 
and determine in which quadrant the coordinate point lies.
	Test Data: 7 9
	Expected Output:
	The coordinate point (7,9) lies in the First quadrant. */
	
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter co-ordinate on X-axis : ");
	scanf("%d",&x);
	printf("Enter co-ordinate on Y-axis : ");
	scanf("%d",&y);
	
	if(x>0 && y>0)
	{
		printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
	}
	
	else if(x>0 && y>0)
	{
		printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
	}
	
	else if(x>0 && y<0)
	{
		printf("The coordinate point (%d,%d) lies in the Thrid quadrant.",x,y);
	}
	
	else if(x<0 && y>0)
	{
		printf("The coordinate point (%d,%d) lies in the Second quadrant.",x,y);
	}
	
	else if(x<0 && y<0)
	{
		printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",x,y);
	}
}	
