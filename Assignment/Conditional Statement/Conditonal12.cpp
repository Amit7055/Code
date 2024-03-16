/* 12.	Write a C program to read roll no, name and marks of three subjects 
and calculate the total, percentage and division.
	Test Data:
	Input the Roll Number of the student :784 
	Input the Name of the Student: James
	Input the marks of Physics, Chemistry and Computer Application: 70 80 90
	Expected Output:
		Roll No: 784
		Name of Student: James 
		Marks in Physics: 70 
		Marks in Chemistry: 80
		Marks in Computer Application: 90 
		Total Marks = 240
		Percentage = 80.00
		Division = First */
		
#include<stdio.h>
int main()
{
	int roll,phy,che,com,total,div;
	char name[50];
	float per,b;
	printf("Roll Number of the student :");
	scanf("%d",&roll);
	
	printf("\nName of the Student :");
	scanf("%s",&name);
	
	printf("\nMarks in Physics :");
	scanf("%d",&phy);
	
	printf("\nMarks in Chemistey :");
	scanf("%d",&che);
	
	printf("\nMarks in Computer Application :");
	scanf("%d",&com);
	
	total=phy+che+com;
	
	per=(float)total/300*100;
	
	
	printf("\nRoll No: %d",roll);
	
	printf("\nName of Student: %s",name);
	
	printf("\nMarks in Physics: %d",phy);
	
	printf("\nMarks in Chemistry: %d",che);
	
	printf("\nMarks in Computer Application: %d",com);
	
	printf("\nTotal Marks = %d",total);
	
	printf("\nPercentage = %.2f",per);
	
	if(per >= 35) 
	{
        if(per >= 81)
            printf("\nDivision = Distinction");
        else if(per >= 70)
            printf("\nDivision = First");
        else if(per >= 60)
            printf("\nDivision = Second");
        else if(per >= 50)
            printf("\nDivision = Third");
        else
            printf("\nDivision = Pass");
    } else {
        printf("\nDivision = Fail");
    }
}
