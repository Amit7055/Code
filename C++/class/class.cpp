/*
create student class with member roll no , name ,total and per 3 std
*/

#include<iostream>
using namespace std;

class stu
{
	private:
	int roll,total;
	char name[50];
	
	public:
		void get_info()
		{
			cout<<"Enter roll no ,name and total marks\n";
			cin>>roll>>name>>total;
		}
		void show_info()
		{
			cout<<"\nRoll no.: "<<roll<<"\nName :"<<name<<"\nTotal Marks :"<<total<<"\n";
			
			cout<<"\n----------------------------------------------------------\n";
		}
};

main()
{
	class stu s1,s2,s3;
	s1.get_info();
	s2.get_info();
	s3.get_info();
	
	s1.show_info();
	s2.show_info();
	s3.show_info();
}