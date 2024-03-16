/*
10.Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. 
(just to make you familiar with initialization lists)
*/

#include<iostream>
using namespace std;

class volume{
	private: 
	    float l,b,h;
	public:
	void box()
	{
		cout<<"Enter lenght : ";
		cin>>l;
		
		cout<<"Enter breadth: ";
		cin>>b;
		
		cout<<"Enter height : ";
		cin>>h;
	}
	
	void box_show()
	{
		cout<<"lenght : "<<l<<"\nbreadth: "<<b<<"\nheight :"<<h<<endl;
	}
};

main()
{
	volume v;
	v.box();
	v.box_show();
}