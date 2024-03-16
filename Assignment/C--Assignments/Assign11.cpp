/*
11.Write a program that would print the information (name, year of joining, salary, address) 
of three employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat
*/

#include<iostream>
#include<string>

using namespace std;

class emp{
	private:
		int year;
		char name[30];
		float sa;
		string add;
	public:
		void get_info()
		{
			cout<<"Enter Emp Name: ";
			cin>>name;
			
			cout<<"Enter year of joining: ";
			cin>>year;
			
			cout<<"Enter salary: ";
			cin>>sa;
			
			cout<<"Enter Address: ";
			cin>>add;
		}
		void show_info()
		{
			cout<<"\nName: "<<name<<"\nYear of joining: "<<year<<"\nSalary: "<<sa<<"\nAddress: "<<add<<endl;
		}
};

main()
{
	emp e;
	e.get_info();
	e.show_info();
}