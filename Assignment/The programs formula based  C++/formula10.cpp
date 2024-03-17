/*
10. Find area of triangle: Prompt: Write a program that takes the base and height 
of a triangle (any triangle) as 
input and calculates its area.
Formula: A = (1/2)bh
*/

#include<iostream>
using namespace std;

main()
{
	int b,h;
	
	cout<<"Enter base of triangle   : ";
	cin>>b;
	
	cout<<"Enter height of triangle : ";
	cin>>h;
	
	cout<<"Area of triangle : "<<b*h/2<<"cm.";
}