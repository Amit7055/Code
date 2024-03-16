/*

*/

//base class

#include<iostream>
using namespace std;

class base{
	public:
		void show()
		{
			cout<<"\nBase class: ";
		}
};

class derived : public base
{
	public:
		void show()
		{
			base :: show();
			cout<<"\nDerived class: ";
		}
};

main()
{
	cout<<"--------------------------------";
	cout<<"\nBase class access"<<endl;
	base b;
	b.show();
	
	cout<<"\n--------------------------------";
	cout<<"\nDerived class access "<<endl;
	derived d;
	d.show();

}