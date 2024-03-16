/* write a scan string and count a,e,i,o,y */

#include<stdio.h>
#include<string.h>
main()
{
	int i,len,count;
	char str[100];
	
	printf("Enter value of string: ");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		printf("\nstr[%d] = %c",i,str[i]);
	}
	
	printf("\nVowels are at: ");
	
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			printf("\n\tstr[%d] = %c",i,str[i]);
			count++;
		}
	}
	printf("\nTotal Vowels = %d",count);
}