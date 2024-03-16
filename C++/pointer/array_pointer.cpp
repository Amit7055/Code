#include<iostream>
using namespace std;

class item{
	private:
		int id;
		char n[40];
		float price;
	public:
		void get_info(int x,float p, char s[])
		{
			id=x;
			price=p;
			strcpy(n,s);
		}
		void show_info()
		{
			cout<<"\n"<<id<<"\t"<<n<<"\t"<<price<<"\t";
			cout<<"\n-----------------------------------------------";
		}
};

main()
{
	int size=3,i,q;
	char name[40];
	float z;
	item *ptr = new item [size];
	item *ptrTemp = ptr;
	
	for(i=0;i<size;i++)
	{
		cout<<"Enter ID , Name and Price :"<<endl;
		cin>>q>>name>>z;
		ptr->get_info(q,z,name);
		ptr++;
	}
	
	cout<<"\n-----------------------------------------------";
	cout<<"\nID: \t"<<"Name:\t"<<"Price:\t" ;
	cout<<"\n-----------------------------------------------";
	
	for(i = 0 ;i < size;i++)
	{
		ptrTemp->show_info();
		ptrTemp++;
	}
}