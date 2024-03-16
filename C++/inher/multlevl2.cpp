#include<iostream>
using namespace std;

class a{
	private:
		int empid;
		char name[40];
	protected:
		float salary;
	public:
		void get_info()
		{
			cout<<"Enter EmpID : ";
			cin>>empid;
			
			cout<<"Enter name  : ";
			cin>>name;
			
			cout<<"Enter Salary: ";
			cin>>salary;
		}
		
		void show_info()
		{
			cout<<"EmpID: "<<empid<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl;
		}
};

class b: public a{
	private:
		int empid;
		char name[40];
		float salary1;
	protected :
		float total;
	public:
		void get()
		{
			get_info();
			cout<<"------------------------------------"<<endl;
			cout<<"Enter EmpID: ";
			cin>>empid;
			
			cout<<"Enter name: ";
			cin>>name;
			
			cout<<"Enter Salary: ";
			cin>>salary1;
			
			total=salary+salary1;
		}
		void show()
		{
			show_info();
			cout<<"\n__________________________________________"<<endl;
			
			cout<<"EmpID: "<<empid<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary1<<endl;
		}
};

class c: public b{
	private:
		int empid;
		char name[40];
		float salary2;
	protected :
		float net;
	public:
		void get1()
		{
			get();
			cout<<"------------------------------------"<<endl;
			cout<<"Enter EmpID: ";
			cin>>empid;
			
			cout<<"Enter name: ";
			cin>>name;
			
			cout<<"Enter Salary: ";
			cin>>salary2;
			
			net=total+salary2;
		}
		void show1()
		{
			show();
			cout<<"\n_____________________________________"<<endl;
			
			cout<<"EmpID: "<<empid<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary2<<endl;
			
		}
		void show2()
		{
			cout<<"Net Salary: "<<net<<endl;
		}
};

main()
{
	c c1;
	c1.get1();
	cout<<"\n------------------------------------"<<endl;
	c1.show1();
	cout<<"\n____________________________________"<<endl;
	c1.show2();
}