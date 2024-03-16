/* 10.	Write a C program to find the eligibility of admission for a professional 
course based on the following criteria:
	Eligibility Criteria: 
	Marks in Math’s >=65 and Marks in Phy >=55 and Marks in Chem>=50 and 
	Total in all three subject >=190 or Total in Maths and Physics >=140. 
	assume
	Input the marks obtained in Physics :65
	Input the marks obtained in Chemistry :51 
	Input the marks obtained in Mathematics :72 
	Total marks of Maths, Physics and Chemistry: 188 
	Total marks of Maths and Physics: 137 
	The candidate is not eligible.
	Expected Output:
		The candidate is not eligible for admission. */
		
#include<stdio.h>
int main()
{
	int m,p,c,t,t1;
	printf("marks obtained in Physics :");
	scanf("%d",&p);
	
	printf("marks obtained in Chemistry :");
	scanf("%d",&c);
	
	printf("marks obtained in Mathematics :");
	scanf("%d",&m);
	
	t=m+p;
	
	t1=m+p+c;
	
	printf("\nTotal marks of Maths, Physics and Chemistry  : %d",t1);
	
	printf("\nTotal marks of Maths and Physics : %d",t);
	
	if(m>=65 && p>=55 && c>=50 && t1>=190 || t>=140)
	{
		printf("\nThe candidate is eligible.");
	}
	else
	{
		printf("\nThe candidate is not eligible.");
	}
	
}
