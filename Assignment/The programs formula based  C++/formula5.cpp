/*
5. Find surface area of sphere:
Prompt: Write a program that takes the radius of a sphere as input and 
calculates its surface area.
Formula: SA = 4πr²
*/

#include<iostream>
using namespace std;

main()
{
	int radius;
	
	cout<<"Enter radius of a sphere :";
	cin>>radius;
	
	cout<<"Surface area of a sphere : "<<4*3.14*radius*radius;
}