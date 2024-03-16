/*
9.	Write a program in C to display the pattern like right angle triangle with a number.
The pattern like :
1
12
123
1234
*/

#include<stdio.h>
main() 
{
    int i,n;
	
	for(i=1;i<=5;i++)
	{
		for(n=1;n<=i;n++)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
}

