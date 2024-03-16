/*
8.	Write a program in C to display the pattern like right angle triangle using an asterisk.
The pattern like :
*
**
***
****
*/

#include<stdio.h>
main()
{
	int i,n;
	
	for(i=1;i<=5;i++)
	{
		for(n=1;n<=i;n++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
