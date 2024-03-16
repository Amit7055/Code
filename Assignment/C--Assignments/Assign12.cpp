/*
12.Write a program to print the name, salary and date of joining of 10 employees in a company. Use
array of objects.
*/

#include<iostream>
#include<string>

using namespace std;

class emp{
	private:
		char name[30];
		float sa,year;
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
	int i,n;
	
	cout<<"Enter number of entries: ";
	cin>>n;
	
	emp e[n];
	
	for(i=0;i<n;i++)
	{
		e[i].get_info();
	}
	for(i=0;i<n;i++)
	{
		e[i].show_info();
	}
}