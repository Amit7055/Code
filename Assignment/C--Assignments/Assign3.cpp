/*
3.Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.
*/

#include<iostream>
using namespace std;

class triangle{
	private:
		int a,b,c;
		float area,per;
	public:
		void get(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
			per=a+b+c;
			area=b*c/2;
			
			cout<<"A = "<<a<<"\nH = "<<b<<"\nB = "<<c;
			cout<<"\nPerimeter = "<<per<<"\nArea = "<<area;
		}
};

main()
{
	triangle t;
	t.get(3,4,5);
}
