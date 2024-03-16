#include<iostream>
using namespace std;

struct stud
{
	int rollno;
};

main()
{
	struct stud *s1,d;
	s1=&d;//----------------------------------------------
	cout<<"Enter rollno: ";
	cin>>(*s1).rollno;
	cout<<"\n"<<(*s1).rollno;
}