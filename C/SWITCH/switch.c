#include<stdio.h>
int main()
{
	int a,b,c,ch;
	printf("1.ADDITION");
	printf("\n2.SUBTRACTION");
	printf("\n3.MUTIPLICATON");
	printf("\n4.DIVISION");
	printf("\n5.COMPARISION\n");
	scanf("%d",&ch);
	printf("\nEnter two number\n");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("%d + %d = %d",a,b,c);
			break;
		case 2:
			c=a-b;
			printf("%d - %d = %d",a,b,c);
			break;
		case 3:
			c=a*b;
			printf("%d X %d = %d",a,b,c);
			break;
		case 4:
			c=a/b;
			printf("%d / %d = %d",a,b,c);
			break;
		case 5:
			if(a>b)
			printf("%d > %d",a,b);
			else
			printf("%d > %d",b,a);
			break;
		default:
			printf("invalid");
	}	
}