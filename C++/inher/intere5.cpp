/*
class BankFD-si=p*r*n/100
amount = p+si

class Loan-interest=loanamount*rate*n/100
amt=loanamount + interest;
final=amount+amt
*/

#include<iostream>
using namespace std;

class BankFD{
	private:
		int n;
		float si,r,p;
	protected:
		float amount;
	public:
		void get()
		{
			cout<<"Enter the principle amount: ";
			cin>>p;
			
			cout<<"Enter no. of years :";
			cin>>n;
			
			cout<<"enter rate of interest: ";
			cin>>r;
			
			si=p*r*n/100;
			amount=si+p;
		}
		void show()
		{
			cout<<"\nSI = "<<si;
			cout<<"\namount = "<<amount;
		}
};

class loan: public BankFD
{
	private:
		int n;
		float li,r,l;
	protected:
		float amt,total;
	public:
		void get_info()
		{
			cout<<"Enter the loan amount: ";
			cin>>l;
			
			cout<<"Enter no. of years :";
			cin>>n;
			
			cout<<"enter rate of interest: ";
			cin>>r;
			
			li=l*r*n/100;
			amt=li+l;
			
			total=amount+amt;
		}
		void show_info()
		{
			cout<<"\nLI = "<<li;
			cout<<"\namount = "<<amt;
			cout<<"\ntotal = "<<total;
		}
};

main()
{
	loan l;
	l.get();
	cout<<"\n";
	l.get_info();
	cout<<"\n";
	l.show();
	cout<<"\n";
	l.show_info();
}