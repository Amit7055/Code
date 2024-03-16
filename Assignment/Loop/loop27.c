/*
27.	Write a program in C to find the prime numbers within a range of numbers.
	Test Data :
		Input starting number of range: 1 Input ending number of range : 50 
	Expected Output :
		The prime number between 1 and 50 are :
		2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

*/

#include<stdio.h>
main()
{
	int start,end,i,j;
	printf("Input starting number of range: ");
    scanf("%d", &start);
    printf("Input ending number of range: ");
    scanf("%d", &end);
	
	printf("The prime numbers between %d and %d are:\n", start, end);
	
	for(i=start;i<end;i++)
	{
		int flag=1;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				flag=0;
			    break;
			}
		}
		if(flag)
		{
			printf("%d ",i);
		}
	}
	
}
