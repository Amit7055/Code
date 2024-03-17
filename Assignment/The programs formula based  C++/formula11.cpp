/*
11. Find simple interest:
Prompt: Write a program that takes the principal amount, interest rate, and 
time period as input and calculates the simple interest.
Formula: SIP*R*T :
*/

#include<iostream>
using namespace std;

main()
{
	int p,t;
	float r;
	
	cout<<"Enter the principal amount     : ";
	cin>>p;
	
	cout<<"Enter the rate of interest     : ";
	cin>>r;
	
	cout<<"Enter the time period in years : ";
	cin>>t;
	
	cout<<"Simple interest is Rs "<<p*r*t;
}