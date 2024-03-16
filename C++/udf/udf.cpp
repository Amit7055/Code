#include<iostream>
using namespace std;

void addition(int x,int y)//without return
{
	int c;
	c=x+y;
	cout<<"\nAdd:"<<x<<"+"<<y<<"="<<c;
}

void sub(int x, int y)
{
	int z;
	z=x-y;
	cout<<"\nSub:"<<x<<"-"<<y<<"="<<z;
}

void swap(int x,int y)
{
	int c;
	c=x;
	x=y;
	cout<<"value of b :"<<c<<endl;
	cout<<"\nvalue of a :"<<x<<endl;
}
main()
{
	int a,b;
	cout<<"Enter value of a and b:\n";
	cin>>a>>b;
	addition(a,b);
	sub(a,b);
	swap(a,b);
}