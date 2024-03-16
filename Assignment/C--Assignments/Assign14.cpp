/*
14.Write a program to calculate the average height of all the students of a class. The number of students
and their heights are entered by the user.
*/

#include<iostream>
using namespace std;

class he
{
	private:
		int height;
		static int c;
	public:
		void get()
		{
			cout<<"Enter height of student: ";
			cin>>height;
		}
		void show()
		{
			c++;
			cout<<"\nHeight of "<<c<<" student: "<<height;
		}
};

int he ::c=0;

main()
{
	int i,n;
	
	he h[i];
	cout<<"Enter Number of students for entry: ";
	cin>>n;
	
	cout<<"\n-----------------------------------------------\n";
	for(i=0;i<n;i++)
	{
		h[i].get();
	}
	
	for(i=0;i<n;i++)
	{
		h[i].show();
	}
	
}
