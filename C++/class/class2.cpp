/*
program-class employe with empno name salary ,total , average 3 person
*/

#include<iostream>
using namespace std;

class employee
{
	private:
	int empno;
	float salary;
	char name[50];
	
	public:
		
		void get_info()
		{
			cout<<"Enter employee No.:";
			cin>>empno;
			
			cout<<"Enter employee name.:";
			cin>>name;
			
			cout<<"Enter employee salary.:";
			cin>>salary;
			
			cout<<"\n";
		}
		
		void show_info()
		{
			cout<<"\n----------------------------------------";
			
			cout<<"\nemployee No.    :"<<empno;
			
			cout<<"\nemployee name.  :"<<name;
			
			cout<<"\nemployee salary.:"<<salary;
			
			cout<<"\n----------------------------------------";
	   }
	   
	   float return_info()
	   {
	   	  return(salary);
	   }
};

main()
{
	int t1,t2,t3;
	float ave,total;
	class employee e1,e2,e3;
	
	e1.get_info();
	e2.get_info();
	e3.get_info();
	
	e1.show_info();
	e2.show_info();
	e3.show_info();
	
	t1=e1.return_info();
	t2=e2.return_info();
	t3=e3.return_info();
	
	total=t1+t2+t3;
	ave=total/3;
	
	cout<<"\nTotal salary :"<<total<<"\nAverage salary :"<<ave;
}