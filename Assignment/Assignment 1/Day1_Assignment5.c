/* 5.Write a program scan 
loan amount
rate of interest
number of years
and calculate total EMI
and EMI amount
and total payable loan amount */

#include<stdio.h>
int main()
{
 float p, R, r, emi,amt;
 int n;

 /* Reading inputs */
 printf("Enter principal amount: ");
 scanf("%f", &p);
 printf("Enter annual interest rate: ");
 scanf("%f", &R);
 printf("Enter number of year: ");
 scanf("%d", &n);


 /* Calculating equated monthly intsallment (EMI) */
 emi = p*R*n/100;
 printf("Monthly EMI: %.2f",emi);
 
 // Calculating total payable loan amount
 amt=emi+p;
 printf("\nTotal Payable Loan Amount: %.2f",amt);

 return 0;
}
