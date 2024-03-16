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
}

