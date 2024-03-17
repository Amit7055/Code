/*
2. Find circumference of circle:
Prompt: Write a program that takes the radius of a circle as input and calculates 
its circumference.
Formula: C = 2pr
*/

#include<iostream>
using namespace std;

main()
{
	int radius;
	cout<<"Enter the radius : ";
	cin>>radius;
	cout<<"The circumference of circle : "<<2*3.14*radius;
}