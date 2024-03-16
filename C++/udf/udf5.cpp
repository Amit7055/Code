/* program scan copy one string into another string */

#include<iostream>
using namespace std;

void cha(char c[20])
{
	char b[20],i;
	for(i=0;i<20;i++)//to copy char - step by step process(loop)
	{
		b[i]=c[i];
	}
	cout<<"\nb="<<b;
}

main()
{
	char a[20];
	cout<<"Enter any character in a ";
	cin>>a; 
	cout<<a; //abc
	cha(a);
}