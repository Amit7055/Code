/*
2.Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.
*/

#include<iostream>

using namespace std;

class stdd
{
	private:
		int roll;
		long  p;
		char name[30],address[50];
	public:
		void get_info()
		{
			cout<<"\nEnter the Name : ";
			cin>>name;
			
			cout<<"Enter Roll No. : ";
			cin>>roll;
			
			cout<<"Enter Phone No.: ";
			cin>>p;
			
			cout<<"Enter Address  : ";
			cin>>address;
		}
		void show_info()
		{
			cout<<"\nName      : "<<name<<"\nRoll No.  : "<<roll<<"\nPhone No. : "<<p<<"\nAddress      : "<<address;
		}
};

main()
{
	stdd s1,s2;
	
	cout<<"-------------------------------";
	s1.get_info();
	cout<<"-------------------------------";
	s2.get_info();
	cout<<"-------------------------------";
	
	s1.show_info();
	cout<<"\n-----------------------------";
	s2.show_info();
	cout<<"\n-----------------------------";
}
