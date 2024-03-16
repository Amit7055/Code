/*
17.	Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks.
      *
    ***
  *****

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
			printf("* ");
		}
		printf("\n");
	}
}
