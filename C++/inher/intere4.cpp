/*mul interetance*/
#include<iostream>
using namespace std;

class first{
	private:
		int a,b;
	protected:
		int c;
	public:
		void get()
		{
			cout<<"Enter value of a: ";
			cin>>a;
			
			cout<<"Enter value of b: ";
			cin>>b;
			
			c=a+b;
		}
		void show()
		{
			cout<<"\na = "<<a<<"\nb = "<<b<<"\nc = "<<c;
		}
};

class second{
	private:
		int p;
	protected:
		int ans;
	public:
		void get_info()
		{
			cout<<"Enter value of p: ";
			cin>>p;
			ans=p+p;
		}
		void show_info()
		{
			cout<<"\np = "<<p<<"\nans = "<<ans;
		}
};

class derived :public first,public second{
	private:
		int dans;
	public:
		void anss()
		{
			dans = c+ans;
			
			cout<<"\nc + ans = dans ="<<dans;
		}
};

main()
{
	derived d;
	d.get();
	cout<<"-------------------------------------------------"<<endl;
	d.get_info();
	cout<<"-------------------------------------------------"<<endl;
	d.show();
	cout<<"\n-------------------------------------------------"<<endl;
	d.show_info();
	cout<<"\n-------------------------------------------------"<<endl;
	d.anss();
	
}