/*
21.	Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
	Test Data :
		Input the number of terms : 5
	Expected Output :
		1 + 11 + 111 + 1111 + 11111
		The Sum is : 12345
*/

#include <stdio.h>
main() 
{
    int i,a,sum = 0,term = 1,a_term = 0;

    printf("Input the number of terms: ");
    scanf("%d", &a);

    printf("The series is: ");
    for (i = 1; i <= a; ++i) 
	{
        printf("%d ", term);
        sum += term;
        a_term = term * 10 + 1; 
        term = a_term;
    }
    printf("\nThe sum of the series = %d\n", sum);

}
