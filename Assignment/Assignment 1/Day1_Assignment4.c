/* 4.write a program which calculate simple interest
si=p*r*n/100
amount=p+si */

#include<stdio.h>
int main()
{
	//input
	int principal,number_of_year;
	float rate_of_interest,simple_interest,amount;
	printf("Enter Principal Amount:");
	scanf("%d",&principal);
	
	printf("Enter the Rate of Interest:");
	scanf("%f",&rate_of_interest);
	
	printf("Enter Number of Year:");
	scanf("%d",&number_of_year);
	//input
	
	simple_interest=principal*rate_of_interest*number_of_year/100;//simple interest
	printf("\nSimple Interest = %.3f",simple_interest);
	
	amount=principal+simple_interest;//total amount
	printf("\nTotal Amount = %.3f",amount);
}
