/*
22.	Write a C program to check whether a given number is an armstrong number or not.
	Test Data :
		Input a number: 153
		Expected Output :
		153 is an Armstrong number.
*/

#include <stdio.h>
main() 
{
    int num,i, o, remainder, result = 0, n = 0;

    printf("Input a number: ");
    scanf("%d", &num);

    o = num;

    while (o!= 0) 
	{
        o/= 10;
        ++n;
    }

    o= num;

    while (o!= 0) 
	{
		int p = 1;
		
        remainder = o% 10;
        
        for (i = 0; i < n; ++i) 
		{
            p*= remainder;
        }
        
        result += p;
        o/= 10;
    }


    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

}

