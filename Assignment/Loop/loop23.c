/*
23.	Write a C program to find the Armstrong number for a given range of number.
	Test Data :
		Input starting number of range: 1 Input ending number of range : 1000 
		Expected Output :
			Armstrong numbers in given range are: 1 153 370 371 407
*/

#include <stdio.h>

int main() {
    int start, end, num, o, remainder, i,result, n, a= 0;

    printf("Input starting number of range: ");
    scanf("%d", &start);
    printf("Input ending number of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers in the given range are: ");

    for (num = start; num <= end; num++) 
	{
        o= num;
        n = 0;
        result = 0;

        
        while (o!= 0) 
		{
            o/= 10;
            n++;
        }

        o= num;

        while (o!= 0) 
		{
            remainder = o % 10;

            int p = 1;
            for (i = 0; i < n; ++i) 
			{
                p *= remainder;
            }

            result += p;
            o/= 10;
        }

        if (result == num) 
		{
            printf("%d ", num);
            a++;
        }
    }

    if (a== 0)
        printf("No Armstrong numbers found in the given range.\n");
    else
        printf("\n");

    return 0;
}

