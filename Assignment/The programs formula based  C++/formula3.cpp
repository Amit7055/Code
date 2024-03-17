/*
3. Calculate area of rectangle:
Prompt: Write a program that takes the length and width of a rectangle as 
input and calculates its area.
Formula: A = Iw
*/

#include<iostream>
using namespace std;

main()
{
	int length,width;
	
	cout<<"Enter length of rectangle :";
	cin>>length;
	
	cout<<"Enter width of rectangle  :";
	cin>>width;
	
	cout<<"Area of the rectangle is "<<length*width;
}