/*
empp class -id name salary

print infomatio of who got max salary

use this *
*/

#include<iostream>
using namespace std;

class empp{
	private:
		int id;
		char name[50];
		float sal;
	public:
		void get_info()
		{
			cout<<"\nEnter ID: ";
			cin>>id;
			
			cout<<"Enter name: ";
			cin>>name;
			
			cout<<"Enter salary: ";
			cin>>sal;
		}
		
		void show()
		{
			cout<<"\nName :"<<name<<"\nID: "<<id<<"\nSal: "<<sal;
		}
		
		empp max(empp &c)
		{
			if(sal>c.sal)
			return *this;
			else
			return(c);
		}
		
		void high()
		{
			cout<<"\nMax salary: ";
			cout<<"\nName :"<<name<<"\nID: "<<id<<"\nSal: "<<sal;
		}
};

main()
{
	empp e1,e2,e3;
	e1.get_info();
	e2.get_info();
	
	e1.show();
	cout<<"\n";
	e2.show();
	
	e3=e1.max(e2);
	cout<<"\n---------------------";
	//e3.show();
	e3.high();
}