/* program scan copy one string into another string */

#include<iostream>
#include<string>
using namespace std;

void cha(char c[20])
{
	char b[20];
	b[20]=c[20];
	cout<<"\nb="<<b;
}

main()
{
	char a[20];
	cout<<"Enter any character in a ";
	cin>>a; 
	cout<<a;
	cha(a);
}