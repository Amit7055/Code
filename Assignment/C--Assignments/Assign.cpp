/*
1.Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign
the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
*/

#include<iostream>
using namespace std;

class student
{
	private:
		char name[40];
		int roll_no;
	public:
		void get_info()
		{
			cout<<"Enter the Name: ";
			cin>>name;
			
			cout<<"Enter the Roll No.: ";
			cin>>roll_no;
		}
		void show_info()
		{
			cout<<"\nName: "<<name<<"\nRoll No.:"<<roll_no;
		}
};

main()
{
	student s1,s2;
	cout<<"----------------------------\n";
	s1.get_info();
	cout<<"----------------------------\n";
	s2.get_info();
	
	cout<<"\n----------------------------\n";
	s1.show_info();
	cout<<"\n----------------------------\n";
	s2.show_info();
	cout<<"\n----------------------------\n";
}
