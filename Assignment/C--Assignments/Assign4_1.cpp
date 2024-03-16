/*
4.Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters.
*/

#include<iostream>
using namespace std;

class tri
{
	private:
		int a,b,c;
		float area,per;
	public:
		tri(int s,int d,int z)
		{
			a=s;
			b=d;
			c=z;
		}
		void get()
		{
			per=a+b+c;
			area=b*c/2;
			
			cout<<"A = "<<a<<"\nH = "<<b<<"\nB = "<<c;
			cout<<"\nPerimeter = "<<per<<"\nArea = "<<area;
		}
};

main()
{
tri t(3,4,5);
t.get();	
}
