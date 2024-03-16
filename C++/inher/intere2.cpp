#include<iostream>
using namespace std;

class AA{
	private:
		int a,b;
		
	protected:
		int c;
		
	public:
		void add()
		{
			cout<<"Enter value for a and b ";
			cin>>a>>b;
			c=a+b;
		}
		
		void show()
		{
			cout<<"\nA = "<<a<<"\nB = "<<b<<"\nC = "<<c;
		}
};

class BB: public AA{
	private:
		int q,p,ans,ans1;
	public:
		void mul()
		{
			cout<<"\nEnter value for p and q ";
			cin>>p>>q;
			ans=p*q;
			ans1=ans+c;
		}
		void show()
		{
			AA :: show();
			cout<<"\np = "<<p<<"\nq = "<<q<<"\nans = "<<ans<<"\nasn1 = "<<ans1;
		}
};

main()
{
	BB b;
	b.add();
	b.mul();
	b.show();
}