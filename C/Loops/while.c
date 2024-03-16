/* write a program which print odd series and even series up to n
odd series 1..3..5.......n
even series 2..4.........n */

#include<stdio.h>
int main()
{
	int a=3,n,c=1,b=2;
	printf("Enter enter number: ");
	scanf("%d",&n);
	int m=n;
	printf("Odd series is");
	
	while(c<=n)
	{
		printf("\t%d",a);
		a=a+2;
		c++;
    }
    
    printf("\nEven series is");
	while(m>0)
	{
		printf("\t%d",b);
		b=b+2;
		m--;
    }
}