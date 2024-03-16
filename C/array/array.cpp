/*1. write a program scan 7 value and print index wise */

#include<stdio.h>
main()
{
	int a[7],i;
	
	for(i=0;i<7;i++)
	{
		printf("Enter %d position num:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		printf("\n a[%d] = %d",i,a[i]);
	}
	
}