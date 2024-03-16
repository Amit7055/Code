#include<iostream>
#include<fstream>
using namespace std;

main()
{
	char name[50];
	float per;
	int i;
	
	ofstream out;
	out.open("CDAC.txt");
	
	for(i=1;i<=5;i++)
	{
		cout<<"Enter name and per: ";
	    cin>>name>>per;
    	out<<name<<"\n"<<per;
	}
	out.close();
	
	ifstream in;
	in.open("CDAC,text");
	for(i=1;i<=5;i++)
	{
	    in>>name>>per;
    	cout<<name<<"\n"<<per;
	}
}
