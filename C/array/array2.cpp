/* write scan 10 number array and calculate sum of even number 
and total even number */

#include<stdio.h>
main()
{
	int a[10],i,j=0,sum=0;
	for(i=0;i<10;i++)
	{
		printf("Enter %d position: ",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			sum=sum+a[i];
			j++;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("\n a[%d] = %d",i,a[i]);
	}
	printf("\ntotal sum even number is : %d",sum);
	printf("\ntotal even number is : %d",j);
}