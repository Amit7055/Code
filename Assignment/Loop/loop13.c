/*
13.	Write a program in C to make such a pattern like a pyramid with an asterisk.
    *
  * *
 * * *
* * * *
*/

#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		
		for(j = 1 ; j <= 5 - i ; j++)
		
		{
			printf("  ");
		}
		
		for(j=1;j<=i;j++)
		
		{
			printf("*   ");
		}
		
		printf("\n");
	}
}
