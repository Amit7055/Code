/*
create FE class
    roll no
    name 
    total marks(3 sub)
S.E class
    total(3sub)
    per=FE Total+total/6
*/

#include<iostream>
using namespace std;

class FE{
	private:
		char name[50];
		int roll,m1,m2,m3;
	protected:
		int total;
	public:
		void get_info()
		{
			cout<<"Enter the name: ";
			cin>>name;
			
			cout<<"Enter roll no.: ";
			cin>>roll;
			
			cout<<"Enter 3 sub marks each out of 100: ";
			cin>>m1>>m2>>m3;
			
			total=m1+m2+m3;
		}
		
		void show()
		{
			cout<<"\nName: "<<name<<"\nRoll No."<<roll<<"\nTotal : "<<total;
		}
		
};

class SE:public FE{
	private:
		char name[50];
		int roll,m1,m2,m3,ans;
		int total1;
		float per;
	public:
		void getinfo()
		{
			cout<<"Enter the name: ";
			cin>>name;
			
			cout<<"Enter roll no.: ";
			cin>>roll;
			
			cout<<"Enter 3 sub marks each out of 100: ";
			cin>>m1>>m2>>m3;
			
			total1=m1+m2+m3;
		}
		
		void show_info()
		{
			cout<<"\nName: "<<name<<"\nRoll No."<<roll<<"\nTotal : "<<total1;
			ans=total+total1;
			per=ans/6;
			
			cout<<"\nTotal of all :"<<ans<<"\nPer"<<per;
		}
};

main()
{
	class SE s;
	s.get_info();
	s.getinfo();
	
	s.show();
	s.show_info();
}