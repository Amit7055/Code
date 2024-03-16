/* scan 10 number and calculate odd number and even sum 
sepreatly */

#include<stdio.h>
int main()
{
	int a=1,b=0,c=0,d;
	while(a<=10)
	{
	printf("\nEnter the number: ");
	scanf("%d",&d);
		if(d%2==0)
		{
			printf("Even number : %d",d);
			c=c+d;
		}
		else
		{
			printf("Odd number : %d",d);
			b=b+d;
		}
		a++;
	}
	printf("\n%d is total sum of all persent even number",c);
	printf("\n%d is total sum of all persent odd number",b);
}
            