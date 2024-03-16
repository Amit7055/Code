/*
2. Write a program scan 10 numbers for array
 print array with index
and
calculated sum of even numbers and total even numbers.
*/

#include <stdio.h>
main() 
{
    int a[10],i,sum=0,count=0; 

    printf("Enter 10 values:\n");
    for(i=0;i<10;i++) 
	{
        scanf("%d", &a[i]);
    }

    printf("\nIndex-wise values:\n");
    for(i=0;i<10;i++) 
	{
        printf("Index a[%d]: %d\n", i, a[i]);
    }
    

    for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
			count++;
		}
	}
    
    printf("Sum of even number : \t%d",sum);
    printf("\nTotal of even number : \t%d",count);
}

