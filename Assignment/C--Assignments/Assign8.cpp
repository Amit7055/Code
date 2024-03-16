/*
8.Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.
*/

#include<iostream>
using namespace std;

class avearge{
	private:
		int a,b,c,call;
	public:
		void get()
		{
			cout<<"Enter Three Number: ";
			cin>>a>>b>>c;
		}
		int cal()
		{
			call=a+b+c;
			return(call);
		}
};

main()
{
	avearge a1;
	cout<<"-------------------------------------"<<endl;
	a1.get();
	cout<<"-------------------------------------"<<endl;
	int aveg;
	aveg=a1.cal()/3;
	cout<<"\nAverage = "<<aveg;
}
