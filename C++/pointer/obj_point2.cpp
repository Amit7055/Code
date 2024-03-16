/*
program-class city
                  city name
				  temperature
	create 2 obj and print city name which temperature is less            
*/

#include<iostream>
#include<string.h>
using namespace std;

class city
{
	private:
		char name[50];
		float a;
	public:
		
		city(float a,char name[])
		{
			this->a=a;
			strcpy(this->name,name);
		}
		
		void show()
		{
			cout<<"\nCity Name: "<<name<<"\nTemper   : "<<a;
		}
		
		city less(city &d)
		{
			if(a<d.a)
			return *this;
			else
			return(d);
		}
};

main()
{
	city c1(32.2,"Nashik");
	city c2(42.5,"Mumbai");
	city c3(0.0,"null");
	c1.show();
	cout<<"\n";
	c2.show();
	cout<<"\n\n";
	cout<<"\ncity which has less temp is"<<endl;
	c3=c1.less(c2);
	c3.show();
	
}