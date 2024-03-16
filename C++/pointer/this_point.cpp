#include<iostream>
using namespace std;

class test{
	private:
		int a,b,c;
	public:
		
		void get(int a,int b,int c)
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
	t1.get(100,200,300);
	t2.get(400,500,600);
	cout<<"\n-------------------------------";
	t1.show();
	cout<<"\n-------------------------------";
	t2.show();
}