/*
1. Calculate area of circle:
Prompt: Write a program that takes the radius of a circle as input and calculates its area.
Formula: A = πr²
*/

#include<iostream>
using namespace std;

int main()
{
	int radius;
	float area;
	cout<<"Enter radius of a circle in cm : ";
	cin>>radius;
	
	area=3.14*radius*radius;
	
	cout<<"Area of circle with radius of "<<radius<<"cm is "<<area<<"cm";
}