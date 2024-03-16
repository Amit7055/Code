/*
29.	Write a program in C to display the number in reverse order. 
	Test Data :
		Input a number: 12345
	Expected Output :
		The number in reverse order is : 54321
*/

#include <stdio.h>
main() 
{
    int num=0, i,reversed = 0,d;

    printf("Input a number: ");
    scanf("%d", &num);
     
    while (num != 0) 
	{
        d = num % 10;
        reversed = reversed * 10 + d;
        num /= 10;
    }

    printf("\nThe number in reverse order is: %d\n", reversed);

}

