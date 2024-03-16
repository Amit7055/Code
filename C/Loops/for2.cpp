/* 9. write a program which print pattern 
(enter number 4)
1 
1 2
1 2 3 
1 2 3 4
1 2 3 
1 2
1 */

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
			printf(" %d ",j);
		}
		printf("\n");
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",j);
		}
		printf("\n");

}
}