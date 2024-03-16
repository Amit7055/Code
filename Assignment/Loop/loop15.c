/*
15.	Write a program in C to display the n terms of even natural number and their sum.
	Test Data :
 		Input number of terms : 5
	Expected Output :
		The even numbers are :2 4 6 8 10
		The Sum of even Natural Number upto 5 terms : 30
*/

#include <stdio.h>
main() 
{
    int n, i,num,sum = 0;
    
    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The even numbers are: ");

    for (i = 1; i <= n; ++i) 
	{
		num=2*i;
        printf("%d ", num);
        sum += num;
        
    }

    printf("\nThe Sum of even Natural Number upto %d terms: %d\n", n, sum);

}

