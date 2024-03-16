/*program scan string & print total occurance chracter*/

#include<stdio.h>
#include<string.h>
main()
{
	int i,n,count=0,len=0;
	char str[100];
	
	printf("Enter string: ");
	gets(str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		printf("\nstr[%d] = %c",i,str[i]);
	}
	
	for(i=0;i<len;i++)
	{
		for(n=0;n<len;n++)
		{
			if(str[i]==str[n])
		    {
			    count++;
		    }
		}
	}
	printf("\nlenght= %d",len);
	printf("\ntotal occurance= %d",count);
}