#include<iostream>
using namespace std;

class test{
	private:
		int a,b,c;
	public:
		test()
		{
			a=100;
		}
		
		void get(int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c;
		}
};

main()
{
	test t1,t2;
	t1.get(200,300);
	t2.get(500,600);
	cout<<"\n-------------------------------";
	t1.show();
	cout<<"\n-------------------------------";
	t2.show();
}