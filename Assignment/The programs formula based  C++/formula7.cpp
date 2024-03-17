/*
7. Find area of right angle triangle:
Prompt: Write a program that takes the base and height of a right-angled triangle 
as input and calculates its area.
Formula: A = (1/2)bh
*/

#include<iostream>
using namespace std;

main()
{
	int b,h;
	
	cout<<"Enter the base of right-angled triangle   : ";
	cin>>b;
	
	cout<<"Enter the height of right-angled triangle : ";
	cin>>h;
	
	cout<<"Area of triangle : "<<b*h/2<<"cm";
}