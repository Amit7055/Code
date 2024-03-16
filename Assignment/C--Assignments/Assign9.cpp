/*
9.Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
with separate functions for each operation whose real and imaginary parts are entered by the user.
*/

#include<iostream>
using namespace std;

class complex{
	private:
		float real1,imag1,real2,imag2;
		float sum,mul,sub,sum2,mul2,sub2,mul3;
	public:
		void get()
		{
			cout<<"Enter First Real and Imaginary number"<<endl;
			cin>>real1>>imag1;
			
			cout<<"Enter Second Real and Imaginary number"<<endl;
			cin>>real2>>imag2;
			
		}
		void add()
		{
			sum=real1+real2;
			sum2=imag1+imag2;
		    cout << "\nSum of (" << real1 << " + " << imag1 << "i) + (" << real2 << " + " << imag2 << "i) = " << sum << " + " << sum2 << "i" << endl;

		}
		void subb()
		{
			sub=real1-real2;
			sub2=imag1-imag2;
			cout << "\nSub of (" << real1 << " + " << imag1 << "i) + (" << real2 << " + " << imag2 << "i) = " << sub << " + " << sub2 << "i" << endl;

		}
		void pro()
		{
			mul=real1*real2 - imag1*imag2;
			mul2=real1*imag2 + real2*imag1; 
			mul3=mul+mul2;
			cout << "\nMul of (" << real1 << " + " << imag1 << "i) + (" << real2 << " + " << imag2 << "i) = " << mul3 << endl;

		}
};

main()
{
	complex c1,c2;
	c1.get();
	cout<<"---------------------------------------------------------------------"<<endl;
	c2.get();
	cout<<"---------------------------------------------------------------------"<<endl;
	c1.add();
	c2.add();
	cout<<"---------------------------------------------------------------------"<<endl;
	c1.subb();
	c2.subb();
	cout<<"---------------------------------------------------------------------"<<endl;
	c1.pro();
	c2.pro();
	cout<<"---------------------------------------------------------------------"<<endl;
}
