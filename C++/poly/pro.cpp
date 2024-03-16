#include<iostream>
using namespace std;

class test
{
	private:
		int a,b,c;
	public:
		
		test(int x,int y)
	{
		a=x;
		b=y;
		c=10;
	}
	
	void show()
	{
		cout<<"\nA= "<<a<<"\nB= "<<b<<"\nC= "<<c;
	}
	
	test operator+(test &obj)
	{
		test temp(0,0);
		temp.a=obj.a+a;
		temp.b=obj.b+b;
		return(temp);
    }
};

main()
{
	test t1(10,20),t2(23,34),t3(0,0);
	t1.show();
	cout<<"\n";
	t2.show();
	cout<<"\n";
	t3.show();
	cout<<"\n";	
	
	t3=t1+t2;
	t3.show();
}