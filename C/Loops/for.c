#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("Enter the Number : ");
	scanf("%d",&a);
	for(i=0;i<=10;i++)
	{
		b=i*a;
		printf("\n%d X %d \t= \t%d",a,i,b);
	}
}