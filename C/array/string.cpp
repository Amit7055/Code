/* wwrite a pro scan string and replace all a chracter with $ 
& print it*/

#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int len,i,count;
	
	printf("Enter string: ");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		printf("\nstr[%d] = %c",i,str[i]);
	}
	for(i=0;i<len;i++)
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
	}
	printf("\nAfter Replacemrnt:");
		for(i=0;i<len;i++)
	{
		printf("\nstr[%d] = %c",i,str[i]);
	}
}