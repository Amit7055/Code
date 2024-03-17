/*
6. Find area of square:
Prompt: Write a program that takes the side length of a square as input and
calculates its area.
Formula : A = s²
*/

#include<iostream>
using namespace std;

main()
{
	int side;
	
	cout<<"Enter side of square is cm : ";
	cin>>side;
	
	cout<<"Area of square : "<<side*side<<"cm";
}