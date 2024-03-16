//

#include<iostream>
using namespace std;

class test{
	private:
		int a,b,c;
		
	public:
		void add(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		
		void show()
		{
			cout<<"A= "<<a<<"\nB= "<<b<<"\nC= "<<c;
		}
		
		void operator -()
		{
			a= -a;
			b= -b;
			c= -c;
		}
		
		void operator +()
		{
			a= +a;
			b= +b;
			c= +c;
		}
};

main()
{
	test t;
	cout<<"\nwithout using operator overloading:\n";
	t.add(-11,50,-15);
	t.show();
	
	
	cout<<"\nusing operator - overloading:\n";
	-t;
	t.show();
	
	cout<<"\nusing operator + overloading:\n";
	+t;
	t.show();
}