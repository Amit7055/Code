#include<iostream>
#include<string.h>
using namespace std;

class person{
	private:
		int age;
		char name[40];
	public:
		
		person(int age,char name[])
		{
			this->age=age;
			strcpy(this->name,name);
		}
		
		void show()
		{
			cout<<"\nAge = "<<age<<"\nName = "<<name;
		}
		
		person comp(person &ob)
		{
			if(age>ob.age)
			return *this;
			else
			return(ob);
		}
};

main()
{
	person p1(20,"Amit");
	p1.show();
	
	person p2(50,"Anil");
	p2.show();
	
	person p3(40,"dasgkja");
	p3.show();
	
	person t(0,"NULL");
	t.show();
	
	cout<<"\n------------";
	t=p1.comp(p2);
	t.show();
	
	cout<<"\n-------------";
	t=p2.comp(p1);
	t.show();
	
	cout<<"\n---------------";
	t=p3.comp(p1);
	t.show();
	
	cout<<"\n--------------------";
	t=p3.comp(p2);
	t.show();
}