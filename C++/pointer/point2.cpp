/*scan 2 number and swap using call by ref
*/

#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	
	cout<<"\na = "<<*x<<"\nb = "<<*y;
}

main()
{
	int a,b;
	cout<<"Enter two number: ";
	cin>>a>>b;
	cout<<"\nBefore swap";
	cout<<"\na = "<<a<<"\nb = "<<b;
	cout<<"\nAfter swap";
	swap(&a,&b);
	
	cout<<"\nmain program call by ref";
	cout<<"\na = "<<a<<"\nb = "<<b;
}