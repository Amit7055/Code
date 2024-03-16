#include<iostream>
using namespace std;

class test{
	private:
		int a,b;
		float c,d;
		char name[40];
	public:
		int add(int x,int y)
		{
			a=x;
			b=y;
			return(a+b);
		}
		void add()
		{
			cout<<"\nEnter value of a :";
			cin>>a;
			
			cout<<"Enter value of b :";
			cin>>b;
			
			cout<<"enter name: ";
			cin>>name;
			
			cout<<"\n"<<a<<" + "<<b<<" = "<<a+b;
			
			cout<<"\naname : "<<name;
		}
		float add(float x)
		{
			/*c=x;
			d=x;*/
			//return(c+d);
			return(x+x);
			
		}
};

main()
{
	test t;
	int ans;
	
	cout<<"without using variable";
	cout<<"\nAdd="<<t.add(10,20);
	
	cout<<"\nusing variable";
	ans=t.add(33,44);
	cout<<"\nadd="<<ans;
	
	test t1;
	t1.add();
	
	cout<<"\nadd in float: "<<t1.add(33.33);
}