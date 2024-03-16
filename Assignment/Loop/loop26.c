/*
26.	Write a C program to display Pascal's triangle. Test Data :
Input number of rows: 5
Expected Output :
				1
	   	    1		1
		1		2		1
	1		3		3		1
1		4		6		4		1

*/

#include <stdio.h>

main() 
{
    int rows,i,j;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; ++i) 
	{
        int coeff = 1;

        for (j = 0; j < rows - i - 1; ++j) 
		{
            printf("   ");
        }

        for (j = 0; j <= i; ++j) 
		{
            printf("%d   ", coeff);
            coeff = coeff * (i - j) / (j + 1);
        }

        printf("\n");
    }

}


