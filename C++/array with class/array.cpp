/*
program-employee class
member-empid, name and salary
then - for 5 employee
cal- total salary and avy salary
*/

#include<iostream>
using namespace std;

class employee
{
	private:
		int empid;
		char name[40];
		float salary;
		
	public:
		
	void get_info()
	{
		cout<<"\nEnter Employee ID :";
		cin>>empid;
		
		cout<<"Enter Employee Name :";
		cin>>name;
		
		cout<<"Enter Employee Salary :";
		cin>>salary;
	}
	
	void show_info()
	{
		cout<<"\n"<<empid<<"\t \t"<<name<<"\t \t"<<salary;
	}
	
	float re()
	{
		return(salary);
	}
};

main()
{
	int m;
	employee e[5];
		int n=0,i;
	float total=0,avg;
	
	cout<<"enter number of entries: ";
    cin>>m;	
	cout<<"Enter Employee Details:";
	
	for(i=0;i<m;i++)
	{         
		e[i].get_info();
		total=total+e[i].re();
		if(n<e[i].re())//comparision
		{
			n=e[i].re();
		}
	}              
	cout<<"\n------------------------------------------------------------";
	cout<<"\nEmployee ID: "<<"\tEmployee Name: "<<"\tEmployee Salary: ";
	cout<<"\n------------------------------------------------------------";
	for(i=0;i<m;i++)                                                  
	{  
	    e[i].show_info();
	}
	avg=total/m;
	
	cout<<"\n------------------------------------------------------------";
    cout<<"\nTotal="<<total<<"\nAverage="<<avg;
	cout<<"\n------------------------------------------------------------";
	cout<<"\nhighest";
	cout<<"\n------------------------------------------------------------";
	cout<<"\nEmployee ID: "<<"\tEmployee Name: "<<"\tEmployee Salary: ";
	cout<<"\n------------------------------------------------------------";
	for(i=0;i<m;i++)                                                  
	{  
	    if(n==e[i].re())
	    {
	    	e[i].show_info();
		}
	}
}