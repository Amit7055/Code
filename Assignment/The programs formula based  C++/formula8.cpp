/*
8. Find area of equilateral triangle:
Prompt: Write a program that takes the side length of an equilateral triangle
as input and calculates its area. Formula: A = (√3/4)s²
*/

#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int side;
	cout<<"Enter side length os equilateral triangle : ";
	cin>>side;
	cout<<"Area of equilateral triangle "<<(sqrt(3)/4)*side*side<<"cm";
}