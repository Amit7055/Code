/*
13.Write a program to print the roll number and average marks of 8 students in three subjects 
(eachout of 100). The marks are entered by the user and the roll numbers are automatically 
assigned.
*/

#include<iostream>
using namespace std;

class students
{
	private:
		int m1,m2,m3;
		char name[50];
		static int roll;
	public:
		void get_info()
		{
			cout<<"------------------------------------------------------------------------"<<endl;
			
			cout<<"Enter name     : ";
			cin>>name;
			
			cout<<"Enter 1st marks: ";
			cin>>m1;
			
			cout<<"Enter 2nd marks: ";
			cin>>m2;
			
			cout<<"Enter 3rd marks: ";
			cin>>m3;
		}
		
		void show()
		{
			roll++;
			cout<<"\nName     : "<<name<<"\nroll no. : "<<roll<<"\n1st marks: "<<m1<<"\n2nd marks: "<<m2<<"\n3rd marks: "<<m3<<endl;
			
		}
};

int students::roll=0;

main()
{
	int i;
	students s[i];
	for(i=0;i<8;i++)
	{
		s[i].get_info();
	}
	
	for(i=0;i<8;i++)
	{
		s[i].show();
	}
}
