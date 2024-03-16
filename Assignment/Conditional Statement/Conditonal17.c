/*
17.	Write a C program to check whether 
an alphabet is a vowel or consonant.
	Test Data: k
	Expected Output:
		The alphabet is a consonant.
*/

#include<stdio.h>
main()
{
	char a;
	
	printf("Enter an alphabet: ");
	scanf("%c",&a);
	
	if(a=='a' || a=='e' || a=='i' || a=='o' ||a=='u' 
	||a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U' )
	{
		printf("%c is an vowel.",a);
	}
	
	else
	{
		printf("%c is an consonant.",a);
	}
}
