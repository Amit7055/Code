//write program for cal

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n%d + %d=%d",a,b,c);
	c=a-b;
	printf("\n%d - %d=%d",a,b,c);
	c=a*b;
	printf("\n%d * %d=%d",a,b,c);
	c=a/b;
	printf("\n%d / %d=%d",a,b,c);
	c=a%b;
	printf("\n =%d",c);
}