/*4. program- for scan array and count total even number*/

#include<iostream>
using namespace std;

void array(int a)
{
    int b[3],i,count=0;
	cout<<"Enter number:";
	for(i=0;i<3;i++)
	{
	    cin>>b[i];
    }
	for(i=0;i<3;i++)
	{
	    cout<<"\n"<<b[i];
	}
	
	for(i=0;i<3;i++)
	{
		if (b[i]%2==0)
		{
			count++;
		}
	}
	cout<<"\nTotal even number ="<<count;
	
}

main()
{
	int a[3],i=0;
	cout<<"Enter number:";
	
	array(a[i]);
}