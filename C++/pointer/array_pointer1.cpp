/*
emp class-
objet 3 employees
create pointer object
scanf and print employee info
*/
#include<iostream>
#include<string.h>
using namespace std;

class emp{
	private:
		int id;
		char name[40];
		float salary;
		static int c;
	public:
		void get_info(int a,float b,char s[])
		{
			id=a;
			salary=b;
			strcpy(name,s);

		}
		
		void show_info()
		{
			c++;
			cout<<"\n"<<c<<"\t"<<id<<"\t\t"<<name<<"\t\t"<<salary;
		}
		
		float net()
		{
			return(salary);
		}
		
};

int emp ::c=0;

main()
{
	int i,q,size,total=0;
	char n[50];
	float sa;
	
	cout<<"Enter size ";
	cin>>size;
	emp *ptr =new emp[size];
	emp *ptrTemp= ptr;
	
	for(i=0;i<size;i++)
	{
		cout<<"Enter id : ";
		cin>>q;
		
		cout<<"Enter name : ";
		cin>>n;
		
		cout<<"Enter salary: ";
		cin>>sa;
		
		ptr->get_info(q,sa,n);
		
		total=total+ptr->net();
		
		ptr++;
	}
	
	
	
	cout<<"_________________________________________"<<endl;
	
	cout<<"\nSr No."<<"\tEmoID : "<<"\tNAME : "<<"\t\tSalary : "<<endl;
	
	cout<<"_________________________________________"<<endl;
	
	for(i=0;i<size;i++)
	{
		ptrTemp->show_info();
		ptrTemp++;
	}
	
	cout<<"\nTotal="<<total;
}