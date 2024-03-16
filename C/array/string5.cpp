/* 5. write program scan and count total number */


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
	
    printf("\nTotal number chracter= %d",len);
}