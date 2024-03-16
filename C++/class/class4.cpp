/*
program-creat FD;fd num,customer name,principle,rate of interest,number of
year the calculate simple interest=p*r*n/100
amount=p+si
*/

#include<iostream>
using namespace std;

class fd
{
	private:
		int fd,p,year;
		char name[50];
		float rate,si,amo;
		
	public:
		
		void get_info()
		{
			cout<<"Enter FD number :"<<endl;
			cin>>fd;
			
			cout<<"Enter name of customer :";
			cin>>name;
			
			cout<<"Enter rate of interest :";
			cin>>rate;
			
			cout<<"enter number of years  :";
			cin>>year;
			
			cout<<"enter principle amount :";
			cin>>p;
		}
		
		void show_info()
		{
			cout<<"\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
			cout<<"\nFD number  :"<<fd;
			
			cout<<"\nname of customer :"<<name;
			
			cout<<"\nrate of interest :"<<rate;
			
			cout<<"\nnumber of years  :"<<year;
			
			cout<<"\nprinciple amount :"<<p;
			
			si=p*rate*year/100;
			
			amo=p+si;
			
			cout<<endl<<"Simple Interest  :"<<si<<endl<<"Total Amount   :"<<amo<<endl;
			
			cout<<"\n******************************************\n";
		}
};

main()
{
	class fd c1,c2;
	
	c1.get_info();
	c2.get_info();
	
	c1.show_info();
	c2.show_info();
}