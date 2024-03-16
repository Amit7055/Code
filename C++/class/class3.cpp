/*
program-product class 
*/

#include<iostream>
using namespace std;

class product
{
	private:
	int id,qua,n;
	float rate,amo,dis,net;
	char name[50];
	
	public:
		
		void get_info()
		{
			cout<<"\nEnter product id: ";
			cin>>id;
			
			cout<<"Enter product name: ";
			cin>>name;
			
			cout<<"Enter quantity: ";
			cin>>qua;
			
			cout<<"Enter rate of product: ";
			cin>>rate;
			
			cout<<"Enter discount in %: ";
			cin>>n;
		}
		
		void show_info()
		{
			cout<<"\n----------------------------------------------------------\n";
			
			cout<<"product id     : "<<id<<endl;
			
			cout<<"product name   : "<<name<<endl;
			
			cout<<"quantity       : "<<qua<<endl;
			
			cout<<"rate of product: "<<rate<<endl;
			
		}
		
		void amo_info()
		{
			amo=rate*qua;
			
			dis=n*amo/100;
			
			net=amo-dis;
			
			cout<<endl;
			
			cout<<"amount    : "<<amo<<endl<<"Discount  : "<<dis<<endl<<"Net amount: "<<net;
			
			cout<<"\n----------------------------------------------------------\n";
		}
};

main()
{
	class product c1,c2;
	
	c1.get_info();
	c2.get_info();
	
	c1.show_info();
	c1.amo_info();
	
	c2.show_info();	
	c2.amo_info();
}