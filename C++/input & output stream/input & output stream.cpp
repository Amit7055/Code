#include<iostream>
using namespace std;

main()
{
	char ch;
	int count=0;
	
	cout<<"Enter string: ";
	cin.get(ch);
	
	while(ch!='\n')
	{
		count++;
		cout.put(ch);
		cin.get(ch);
	}
	
	cout<<"\nTotal count: "<<count;
}