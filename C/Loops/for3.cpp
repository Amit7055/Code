/*10. write a program which print pattern
1
2 2
3 3 3
4 4 4 4 */

#include<stdio.h>
main()
{
	int i,j,n,c=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
    	for(i=n-1;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",i);
		}
		printf("\n");
    }
}