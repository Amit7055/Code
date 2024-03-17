/*
9. Find perimeter of rectangle:
Prompt: Write a program that takes the length and width of a rectangle 
as input and calculates its perimeter.
Formula: P = 21 + 2w
*/
#include<iostream>
using namespace std;

main()
{
	int l,w;
	
	cout<<"Enter length of a rectangle : ";
	cin>>l;
	
	cout<<"Enter width of a rectangle : ";
	cin>>w;
	
	cout<<"Perimeter of a rectangle is "<<2*l + 2*w;
}