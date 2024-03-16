/*
5.Write a program which store 1 to 5 squar inside the array.
*/

#include <stdio.h>
main() 
{
    int a[50],i,sq,n; 
    
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    
    for (i=0;i<n;i++) 
	{
        sq=i+1;
        a[i]=sq*sq;
    }
    
    printf("\n1 to 5 square inside the array.:\n");
    for (i=0;i<n;i++) 
	{
        printf("\nSquare[%d] =\t%d",i,a[i]);
    }

}
