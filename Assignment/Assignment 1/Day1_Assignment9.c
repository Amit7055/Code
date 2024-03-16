/*4.Write a program scan age of person and print person is minor, major or senior citizen.*/

#include<stdio.h>

int main() 
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age < 18) 
	{
        printf("You are a minor.\n");
    } 
	else if (age >= 18 && age <= 59) 
	{
        printf("You are a major.\n");
    } 
	else 
	{
        printf("You are a senior citizen.\n");
    }
    return 0;
}

