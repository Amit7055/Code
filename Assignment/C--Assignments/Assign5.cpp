/*
5.Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.
*/

#include<iostream>
using namespace std;

class rectangles{
	private:
		int a,b,area;
	public:
		rectangles(int x,int y)
		{
			a=x;
			b=y;
			area=x*y;
		}
		void show()
		{
			cout<<"\narea = "<<area;
		}
};

main()
{
	cout<<"-----------\n";
	cout<<"First area:";
	rectangles r(4,5);
	r.show();
	
	cout<<"\n-----------";
	cout<<"\nFirst area:";
	rectangles r1(5,8);
	r1.show();
}
