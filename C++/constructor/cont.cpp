/*
program for city class and enter temp with default argument
*/

#include<iostream>
using namespace std;

class city
{
	private:
		int temp;
	public:
		city()
		{
			temp=20;
		}
		
		void show_info()
		{
			cout<<"Temperature :"<<temp;
		}
};

main()
{
	city c1;
	c1.show_info();
}