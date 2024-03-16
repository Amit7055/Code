/*scan string and calculate lenght of string without using std function
call by refernce
*/

#include<iostream>
using namespace std;

int lenght(char *str)
{
	int i=0;
	while(*str!='\0')
	{
		i++;
		str++;//goes to next address of string variabel
	}
	return(i);
}

main()
{
	char str[50];
	int len;
	cout<<"enter value of string: ";
	cin>>str;
	
	len=lenght(str);
	
	cout<<"\nLenght of string "<<str<<" is "<<len;
}