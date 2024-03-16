/*18.	Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
	Test Data :
		Input the number or terms :5
	Expected Output :
		9 99 999 9999 99999
		The sum of the saries = 111105*/
		

#include <stdio.h>
main() 
{
    int i,a,sum = 0,term = 9,a_term = 0;

    printf("Input the number of terms: ");
    scanf("%d", &a);

    printf("The series is: ");
    for (i = 1; i <= a; ++i) 
	{
        printf("%d ", term);
        sum += term;
        a_term = term * 10 + 9; 
        term = a_term;
    }
    printf("\nThe sum of the series = %d\n", sum);

}

