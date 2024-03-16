/*
1. Basics:
• Print "Hello, World!".
• Swap two numbers.
• Find the maximum of two numbers.
• Check if a number is even or odd.
• Calculate the factorial of a number.
*/

#include<iostream>
using namespace std;

class print
{
	private:
	public:
		void pa()
		{
			cout<<"Print Hello, World!";
		}
};

class swap
{
	private:
		int c,d;
	public:
		swap(int z,int y)
		{
			int temp=0;
			c=z;
			d=y;
			temp=c;//5
			c=y;//6
		    y=temp;//5
		    cout<<"\na = "<<c<<"\nb = "<<temp<<endl;
		}
};

class max
{
	private:
		int x,y;
	public:
		int maxx(int n,int z)
		{
			x=n;
			y=z;
			if(x>y)
			return(x);
			else
			return(y);
		}
};

class even
{
	private:
		int x;
	public:
		even(int n)
		{
			x=n;
			if(x%2==0)
			cout<<x<<" : is a even number";
			else
			cout<<x<<" : is a odd number";
		}
};

class fact
{
	private:
		int i,x;
	public:
		int factt(int c)
		{
			int fac=1;
			x=c;
			for(i=1;i<=x;i++)
			{
				fac=fac*i;
			}
			return(fac);
		}
};

main()
{
	int a,b,ch;
	
	cout<<"1. Print Hello, World!"<<endl;
    cout<<"2. Swap two numbers."<<endl;
    cout<<"3. Find the maximum of two numbers."<<endl;
    cout<<"4. Check if a number is even or odd."<<endl;
    cout<<"5. Calculate the factorial of a number."<<endl;
    cin>>ch;
    
    switch(ch)
    {
    	case 1:
    		{
    		class print p;
    		p.pa();
    		break;
			}
    	case 2:
    		{
    			cout<<"\nEnter 2 numbers are ";
    			cin>>a>>b;
    		    class swap s1(a,b);
                break;
			}
        case 3:
        	{
        	    cout<<"Enter 2 number: ";
        	    cin>>a>>b;
                class max ma;
                cout<<"Max No. : "<<ma.maxx(a,b);
			}
        case 4:
        	{
        		cout<<"Enter number: ";
        	    cin>>a;
        	    even e1(a);
			}
		case 5:
			{
				cout<<"Enter number: ";
        	    cin>>a;
        	    fact f;
        	    cout<<"Factorial of "<<a<<" is :"<<f.factt(a);
			}
	}
}
