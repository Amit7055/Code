/*
20.	Write a program in C to display the n terms of square natural number and their sum.
1 4 9 16 ... n Terms 
	Test Data :
		Input the number of terms : 5
	Expected Output :
		The square natural upto 5 terms are :1 4 9 16 25
		The Sum of Square Natural Number upto 5 terms = 55
*/

#include <stdio.h>
main() 
{
    int n, sum = 0,i;

    printf("Enter number : ");
    scanf("%d", &n);

    printf("The square natural up to %d number are: ", n);

    for (i = 1; i <= n; ++i) 
	{
        int square = i * i;
        printf("%d ", square);
        sum += square;
    }

    printf("\nThe Sum of Square Natural Number up to %d terms = %d\n", n, sum);

}

