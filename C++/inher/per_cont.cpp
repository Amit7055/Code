#include<iostream>
using namespace std;

class base{
	private:
		int a;
	public:
		base()
	{
		a=10;
	}
	base(int y)
	{
		a=y;
	}
	
	void show()
	{
		cout<<"A="<<a<<endl;
	}
};

class derived : public base{
	private:
		float f;
	public:
		derived()
		{
			f=30.90;
		}
		derived(float x):base(100)
		{
			f=x;
		}
		void show_info()
		{
			base::show();
			cout<<"F="<<f<<endl;;
		}
};

main()
{
	derived d;
	d.show_info();
	derived d1(23.32);
	d1.show_info();
}