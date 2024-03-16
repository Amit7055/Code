/*12.	Write a program in C to make such a pattern like a pyramid with numbers increased by 1.
     1
   2 3
 4 5 6
7 8 9 10*/

#include <stdio.h>
main() 
{
    int i, j, number = 1;

    for (i = 1; i <= 5; i++) 
	{
        // Print spaces 
        for (j = 1; j <= 5 - i; j++)
		{
            printf("  ");
        }

        // Print numbers 
        for (j = 1; j <= i; j++) 
		{
            printf("%d   ", number);
            number++;
        }

        // Move to the next line
        printf("\n");
    }

}

