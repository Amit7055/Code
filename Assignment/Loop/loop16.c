/*
16.	Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.
      1
    2 2
  3 3 3
4 4 4 4
*/

#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
