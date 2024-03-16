/*
4. Write a program scan array for 10 numbers which is combination
of positive and negative numbers replace all negative numbers by 0
*/

#include <stdio.h>
main() 
{
    int a[10],i,p=0,n=0,count=0,total=0,r; 

    printf("Enter 10 values:\n");
    for(i=0;i<10;i++) 
	{
        scanf("%d", &a[i]);
    }
    
    printf("\n-------------------------------------\n");
    
    printf("\nOrignal:\n");
    for(i=0;i<10;i++) 
	{
        printf("Index a[%d]: %d\n", i, a[i]);
    }

    for(i=0;i<10;i++)
	{
		if(a[i]<0)
		{
			n=n+a[i];
			total++;
			a[i]=0;
		}
		else
		{
			p=p+a[i];
			count++;
		}
	}
    
    printf("\n-------------------------------------\n");
    
    printf("\nReplace:\n");
    for(i=0;i<10;i++) 
	{
        printf("Index a[%d]: %d\n", i, a[i]);
    }
    
    
    printf("\n-------------------------------------\n");
    
    printf("\nTotal negative        : \t%d",n);
    printf("\nTotal negative number : \t%d",total);
    
    printf("\n-------------------------------------\n");
    
    printf("\nTotal positive        : \t%d",p);
    printf("\nTotal positive number : \t%d",count);
}
