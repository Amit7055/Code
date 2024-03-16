/* 5. Write a program scan number between
1 to 500
---- print number between 1 to 250
--- print number between 251 to 500
--- print number not in 1 to 500 */

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number between 1 to 500: ");
	scanf("%d",&a);
	if(a>=1 && a<=250)
	{
		printf("%d : Number is between 1 to 250",a);
	}
	else if(a>=251 && a<=500)
	{
		printf("%d : Number is between 251 to 500",a);
	}
	else
	{
		printf("%d is not between 1 to 500:",a);
	}
}
