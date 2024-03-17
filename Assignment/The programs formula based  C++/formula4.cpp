/*
4. Calculate volume of sphere:
Prompt: Write a program that takes the radius of a sphere as input and 
calculates its volume.
Formula: V = (4/3)πr³
*/

#include<iostream>
using namespace std;

main()
{
	int radius;
	cout<<"Enter radius of sphere : ";
	cin>>radius;
	
	cout<<"Volume of sphere is "<<3.14*radius*radius*radius*4/3;
}