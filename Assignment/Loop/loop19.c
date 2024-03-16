/*
19.	Write a program in C to print the Floyd's Triangle.
1
01
101
0101
10101
*/

#include <stdio.h>
main() 
{
    int i,r,j,number = 1;

    printf("Enter the number : ");
    scanf("%d", &r);

    for (i=1; i<=r; i++) 
	{
        for (j=1; j<= i; j++) 
		{
            printf("%d ", (i+j)%2);
        }
        printf("\n");
    }
}

