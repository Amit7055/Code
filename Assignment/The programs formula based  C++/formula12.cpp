/*
12. Find compound interest
Prompt: Write a program that takes the principal amount, 
interest rate, compounding frequency, and time period as input 
and calculates the compound interest
*/

#include<iostream>
#include<cmath>
using namespace std;

main()
{
	int p,year;
	float compound_freq,rate,ci;
	
	cout<<"Enter principal amount : ";
	cin>>p;
	
	cout<<"Enter rate of interest : ";
	cin>>rate;
	
	cout<<"compounding frequency : ";
	cin>>compound_freq;
	
	//cout<<"Enter time period : ";
	//cin>>year;
	
	ci=p * pow(1 + (rate/compound_freq), compound_freq) - p;
	
	cout<<"The compound interest is "<<ci;
}