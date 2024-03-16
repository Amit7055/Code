#include<iostream>
using namespace std;

void fun(int *x)
{
	*x=(*x)+1;
	cout<<"\n*x="<<*x;
}

main()
{
	int a;
	cout<<"Enter value of a: ";
	cin>>a;
	
	fun(&a);
	cout<<"\na ="<<a;
}