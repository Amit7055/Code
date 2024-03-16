/* write a program scan 10 num which is combination of
positive and negative number and count total positive and
negative number*/

#include<stdio.h>
int main()
{
	int a[10],i,p=0,c=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter %d position: ",i);
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			printf("Positive a[%d] = %d",i,a[i]);
			p++;
		}
		else
		{
			printf("Negative a[%d] = %d",i,a[i]);
			c++;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("\n a[%d] = %d",i,a[i]);
	}
	printf("\nTotal count of positive number is %d:",p);
	printf("\nTotal count of negative number is %d:",c);
}