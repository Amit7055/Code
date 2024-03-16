/*
32.	Write a C program to find HCF (Highest Common Factor) of two numbers. 
	Test Data :
		Input 1st number for HCF: 24 Input 2nd number for HCF: 28 	
Expected Output :
		HCF of 24 and 28 is : 4
*/

#include <stdio.h>
main() 
{
    int i,num1, num2, hcf,min;

    printf("Input 1st number for HCF: ");
    scanf("%d", &num1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &num2);
    
    if(num1<num2)
    {
    	min=num1;
	}
    else
    {
    	min=num2;
	}

    
    for (i = 1; i <= min; ++i) 
	{
        if (num1 % i == 0 && num2 % i == 0) 
		{
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

}
