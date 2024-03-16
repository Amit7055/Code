/* program - create employee struct with variable as 
empno
empname
salary */

#include<iostream>
using namespace std;

struct emp
{
	int empno,salary;
	char empname[40];
};
main()
{
	struct emp e1,e2;
	
	cout<<"Enter empno "<<"emp name "<<"salary"<<endl;
	cin>>e1.empno>>e1.empname>>e1.salary;
	
	cout<<"Enter empno "<<"emp name "<<"salary"<<endl;
	cin>>e2.empno>>e2.empname>>e2.salary;
	
	cout<<"\nFirst Emp details:"<<endl;
	cout<<"\nemp no :"<<e1.empno<<"\nemp name :"<<e1.empname<<"\nsalary :"<<e1.salary<<endl;
	
	cout<<"\n2nd Emp details:"<<endl;
	cout<<"\nemp no :"<<e2.empno<<"\nemp name :"<<e2.empname<<"\nsalary :"<<e2.salary<<endl;
	
	if(e1.salary>e2.salary)
	cout<<"\n"<<e1.empname<<" has more salary"<<endl;
	else
	cout<<"\n"<<e2.empname<<" has more salary";
}