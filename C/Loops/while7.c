/* program scan number and print number of digit place */

#include<stdio.h>
int main()
{
	int a=0,sum=0,n;
	printf("Enter the digit: ");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
		a++;
	}
	printf("\nNumber of digit or places is %d",a);
	printf("\nSum of digits is %d",sum);
}