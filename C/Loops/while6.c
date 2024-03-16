/* scan 10 number which is combination of positive and negative
numbers, sum pos and count neg */

#include<stdio.h>
int main()
{
	int a=1,b,c=0,d=0;
	while(a<=10)
	{
		printf("\nEnter Positive or Negative Number:");
		scanf("%d",&b);
		if(b<0)
		{
			printf("%d is an negative number:",b);
			c++;
		}
		else
		{
			printf("%d is an positive number:",b);
			d=d+b;
		}
		a++;
	}
	printf("\n%d is  total positive number:",d);
	printf("\n%d is total count negative number:",c);
}