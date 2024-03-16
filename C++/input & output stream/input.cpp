#include<iostream>
using namespace std;

main()
{
	char ch[50];
	
	cout<<"enter string: ";
	cin>>ch;
	cout<<"\nNAME:"<<ch;
//	cout<<"enter string: ";
	cin.getline(ch,20);
	
	cout<<"\nNAME:"<<ch;
	
}