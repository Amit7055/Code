/*
1. Write a program scan 7 values and print index wise.
*/

#include <stdio.h>
main() 
{
    int values[7],i; 

    printf("Enter 7 values:\n");
    for (i=0;i<7;i++) 
	{
        scanf("%d", &values[i]);
    }

    printf("\nIndex-wise values:\n");
    for (int i = 0; i < 7; i++) 
	{
        printf("Index %d: %d\n", i, values[i]);
    }

}

