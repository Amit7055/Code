/*
7.Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.
*/

#include<iostream>
using namespace std;

class area{
	private:
		int a,b,aarea;
	public:
		area(int x,int y)
		{
			a=x;
			b=y;
		}
		
		int returnArea()
		{
			aarea=a*b;
			return(aarea);
		}
};

main()
{
	int l,br;
	cout<<"------------------------------"<<endl;
	cout<<"Enter the lenght  :";
	cin>>l;
			
	cout<<"Enter the breadth :";
	cin>>br;
	cout<<"------------------------------"<<endl;
	area a(l,br);
	
	cout<<"Area = "<<a.returnArea();
	cout<<"\n------------------------------"<<endl;
	
}
