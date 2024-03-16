/*
class
*/


#include<iostream>
using namespace std;

class emp
{
	private:
		int empno;
		char name[50];
	protected:
		float salary;
	public:
		void get()
		{
			cout<<"Enter EmpNO.: ";
			cin>>empno;
			
			cout<<"Enter Name: ";
			cin>>name;
			
			cout<<"Enter salary: ";
			cin>>salary;
		}
		void show()
		{
			cout<<"\nEmpNO.: "<<empno<<"\nName: "<<name<<"\nSalary: "<<salary;
		}
};

class bonuss{
	protected:
		float bonus;
	public:
		void get_info()
		{
			cout<<"Enter bonus: ";
			cin>>bonus;
			
			cout<<"\nbonus = "<<bonus;
		}
};

class net: public emp, public bonuss{
	private:
		int nett;
	public:
		void show_info()
		{
			nett=bonus+salary;
			cout<<"\n net = "<<nett;
		}
};

main()
{
	net t;
	t.get();
	t.get_info();
	t.show();
	t.show_info();
}