/*
6.Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.
*/

#include<iostream>
using namespace std;

class area{
	private:
		int a,b,area;
	public:
		void setDim()
		{
			cout<<"Enter the lenght  :";
			cin>>a;
			
			cout<<"Enter the breadth :";
			cin>>b;
			
			area=a*b;
		}
		
		void getArea()
		{
			cout<<"Area of rectangle :"<<area<<endl;
		}
};

main()
{
	area a1,a2;
	cout<<"--------------------------------"<<endl;
	a1.setDim();
	cout<<"------------------------------"<<endl;
	a1.getArea();
	
	cout<<"------------------------------"<<endl;
	a2.setDim();
	cout<<"------------------------------"<<endl;
	a2.getArea();
	cout<<"------------------------------"<<endl;
}
