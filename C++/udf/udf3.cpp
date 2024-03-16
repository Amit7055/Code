/* 3.write program to cal factorial without return */

#include<iostream>
using namespace std;

void fact(int a)
{
	int i,b=1;
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	cout<<"\nfactorial of "<<a<<" is "<<b;
}

main()
{
	int a;
	cout<<"Enter number:";
	cin>>a;
	fact(a);
}