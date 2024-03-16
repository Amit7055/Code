/*
program-create student class
1.default const stored FE total marks s.e te be
*/

#include<iostream>
using namespace std;

class student
{
	private:
		int m,s,t,f,p;
		
		public:
			
			student()
			{
				m=500;
			}
			
			student(int z)
			{
				p=z;
			}
			
			student(int x,int y)
			{
				s=x;
				t=y;
			}
			
			student(int a,int b,int c,int d)
			{
				m=a;
				s=b;
				t=c;
				p=d;
			}
			
			void get_info()
			{
				cout<<"\nTotal marks of F.E ="<<m;
				cout<<"\nTotal marks of S.E ="<<s;
				cout<<"\nTotal marks of T.E ="<<t;
				cout<<"\nPercentage of B.E ="<<p;
				cout<<"\n-----------------------------";
			}
			
			void show_info()
			{
				cout<<"\nTotal marks of F.E ="<<m;
				cout<<"\nTotal marks of S.E ="<<s;
				cout<<"\nTotal marks of T.E ="<<t;
				cout<<"\nPercentage of B.E ="<<p;
				cout<<"\n-----------------------------";
			}
			
			void info()
			{
				cout<<"\nTotal marks of S.E ="<<s;
				cout<<"\nTotal marks of T.E ="<<t;
				cout<<"\n-----------------------------";
			}
};

main()
{
	student s1;
	s1.show_info();
	
	student s2(400,700);
	s2.info();
	
	student s3(55);
	s3.show_info();
	
	student s4(500,400,700,55);
	s4.get_info();
}