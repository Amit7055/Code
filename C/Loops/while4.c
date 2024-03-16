/* program print leap year between year 2000 to 2030 and
print total leap  */

#include<stdio.h>
main()
{
	int a=2000,sum=a,b=0;
	while(a<=2030)
	{
		if(a%4==0)
		{
			printf("\n%d is a leap year:\n",a);
			b++;
		}
	a++;
	}
	printf("\ntotal leap year between 2000 and 2030 is %d.",b);
}