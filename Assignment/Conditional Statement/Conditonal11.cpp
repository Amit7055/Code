/* 11.	Write a C program to calculate the root of a Quadratic Equation. 
	Test Data: 1 5 7
	Expected Output:
		Root is imaginary;
		No solution. */


#include <stdio.h>
#include <math.h>
main() 
{
    int a, b, c;
    float d, r1, r2;

    printf("Enter coefficients (a): \n");
    scanf("%d",&a);
    
    printf("Enter coefficients (b): \n");
    scanf("%d",&b);
    
    printf("Enter coefficients (c): \n");
    scanf("%d",&c);

    d = b*b-4*a*c;

    if(d>0) 
	{
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    } 
	else if(d==0) 
	{
        r1=r2=-b/(2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    } 
	else 
	{
        printf("Roots are imaginary;\n");
        printf("No solution.\n");
    }
}

