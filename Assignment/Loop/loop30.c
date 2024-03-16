/*
30.	Write a program in C to check whether a number is a palindrome or not. 
	Test Data :
		Input a number: 121
	Expected Output :
		121 is a palindrome number.
*/

#include <stdio.h>
main() 
{
    int num=0, i,reversed = 0,d,sum;

    printf("Input a number: ");
    scanf("%d", &num);
     sum=num;
    while (num != 0) 
	{
        d = num % 10;
        reversed = reversed * 10 + d;
        num=num/10;
    }

    if(sum==reversed)
    {
    	printf("\n%d is a palindrome number.", sum);
	}
	else
	{
		printf("\n%d is not palindrome number.", sum);
	}

}
