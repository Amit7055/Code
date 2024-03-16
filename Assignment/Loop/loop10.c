/*
10.	Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.
The pattern like :
1
22
333
4444
*/

#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
}
