/*write menu driven program create meanu as 
    1.addition(with return)
    2.substraction(without return)
    3.multiplication(without return)
*/

#include<iostream>
using namespace std;

int addition(int x, int y)
{
	int c;
	c=x+y;
	return(c);
}

void sub(int x,int y)
{
	int c;
	c=x-y;
	cout<<x<<"-"<<y<<"="<<c;
}

void mul(int x,int y)
{
	int c;
	c=x*y;
	cout<<x<<"*"<<y<<"="<<c;
}

main()
{
	int ch,a,b,add;
	cout<<"\n1.Addition"<<"\n2.Substraction"<<"\n3.multiplication";
	cout<<"\nEnter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"\nEnter value of a and b:";
       	cin>>a>>b;
		add=addition(a,b);
		cout<<a<<"+"<<b<<"="<<add;
		break;
		case 2:
		cout<<"\nEnter value of a and b:";
	    cin>>a>>b;
			sub(a,b);
		    break;
		case 3:
			cout<<"\nEnter value of a and b:";
	    cin>>a>>b;
			mul(a,b);
			break;
		default:
			cout<<"Invalid choice";
	}
}