/*
33.	Write a program in C to print a string in reverse order. 
	Test Data :
		Input a string to reverse : Welcome
	Expected Output :
		Reversed string is: emocleW
*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len,i;
    printf("Input a string to reverse: ");
    gets(str);

    len= strlen(str);

    printf("Reversed string is: ");
    for (i=len-1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

