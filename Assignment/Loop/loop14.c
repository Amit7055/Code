/*
14.	Write a C program to calculate the factorial of a given number. 
	Test Data :
		Input the number : 5
	Expected Output :
		The Factorial of 5 is: 120
*/

#include <stdio.h>
main() 
{
    int num,i, fact=1; 

    printf("Input the number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i) 
	{
        fact*= i;
    }

    printf("The Factorial of %d is: %d\n", num, fact);

}

