//base class

#include<iostream>
using namespace std;

class base{
	public:
		void base_show()
		{
			cout<<"\nBase class: ";
		}
};

class derived : public base
{
	public:
		void show()
		{
			base_show();
			cout<<"\nDerived class: ";
		}
};

main()
{
	cout<<"--------------------------------";
	cout<<"\nBase class access"<<endl;
	base b;
	b.base_show();
	
	cout<<"\n--------------------------------";
	cout<<"\nDerived class access "<<endl;
	derived d;
	d.base_show();
	d.show();
}