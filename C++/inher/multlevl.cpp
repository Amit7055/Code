#include<iostream>
using namespace std;

class a{
	public:
		void abase()
		{
			cout<<"CLASS A:"<<endl;
		}
};

class b: public a{
	public:
		void bbase()
		{
			cout<<"CLASS B: "<<endl;
		}
		void bbbase()
		{
			abase();
			cout<<"CLASS B: "<<endl;
		}
};

class c: public b{
	public:
		void cdrive()
		{
			cout<<"CLASS C: "<<endl;
		}
		void ccdrive()
		{
			bbbase();
			cout<<"CLASS C: "<<endl;
		}
};

main()
{
	c c1;
	c1.abase();
	c1.bbase();
	c1.cdrive();
	
	cout<<"\n-----------------------------------------------"<<endl;
	c1.ccdrive();
	
}