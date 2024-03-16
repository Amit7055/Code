#include<iostream>
using namespace std;
class B;
class A
{
	private:
		float t;
	public:
		void gett()
		{
			cout<<"Enter Number: ";
			cin>>t;
		}
		
	void showw()
	{
		cout<<"\nA = "<<t;
	}
	friend void add(A &obj, B &ob);
};


class B{
	private:
		float temp;
	public:
		void get()
		{
			cout<<"Enter Number: ";
			cin>>temp;
		}
		
	void show()
	{
		cout<<"\nB = "<<temp;
	}
	friend void add(A &obj, B &ob);
};


void add(A &obj, B &ob)
{
	cout<<"\nADD ="<<obj.t<<" + "<<ob.temp<<" = "<<obj.t+ob.temp;
}

main()
{
	A a1;
	B b1;
	
	a1.gett();
	a1.showw();
	cout<<"\n------------------";
	b1.get();
	b1.show();
	
	add(a1,b1);
}