/* 8. write a program scan 3 number and calculate sum of digit */

#include<stdio.h>
main()
{
	int i,j,n,sum=0;
	for(i=1;i<=3;i++)
	{
		sum=0;
		printf("\nEnter Digit: ");
	    scanf("%d",&n);
		while(n>0)
		{
		    sum=sum+n%10;
		    n=n/10;
		}
		printf("Sum of digit = %d",sum);
	}
	
}