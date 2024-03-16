/*18.	Write a program in C to calculate and print the Electricity bill of a given customer. 
	The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. 
	The charge is as follow:
	Unit	Charge/unit
	up to 199	@1.20
	200 and above but less than 400	@1.50
	400 and above but less than 600	@1.80
	600 and above	@2.00
	If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
	Test Data:
	1001
	James 
	800
	Expected Output:
		Customer IDNO :1001 
		Customer Name: James 
		unit Consumed :800
		Amount Charges @Rs. 2.00 per unit: 1600.00 
		Surcharge Amount: 240.00
		Net Amount Paid by the Customer: 1840.00*/

#include<stdio.h>
main()
{
	int id,unit;
	float sur,a,net;
	char name[50];
	
	printf("Enter Id No.: ");
	scanf("%d",&id);
	
	printf("Customer Name: ");
	scanf("%s",&name);
	
	printf("Unit Consumed: ");
	scanf("%d",&unit);
	
	if(unit<=199)
	{
		a=(float)unit*1.2;
		
		sur=15*a/100;
		
		net=a+sur;
		
		printf("\nCustomer Id No : %d",id);
		
		printf("\nCustomer Name : %s",name);
		
		printf("\nUnit Consumed : %d",unit);
		
		printf("\nAmount Charges @Rs. 1.20 per unit: %.2f",a);
		
		printf("\nSurcharge Amount: %.2f",sur);
		
		printf("Net Amount Paid by the Customer: %.2f",net);
		
	}
	
	else if(unit>=200 && unit<400)
	{
		a=(float)unit*1.50;
		
		sur=15*a/100;
		
		net=a+sur;
		
		printf("\nCustomer Id No : %d",id);
		
		printf("\nCustomer Name : %s",name);
		
		printf("\nUnit Consumed : %d",unit);
		
		printf("\nAmount Charges @Rs. 1.50 per unit: %.2f",a);
		
		printf("\nSurcharge Amount: %.2f",sur);
		
		printf("\nNet Amount Paid by the Customer: %.2f",net);
	}
	
	else if(unit>=400 && unit<600)
	{
		a=(float)unit*1.80;
		
		sur=15*a/100;
		
		net=a+sur;
		
		printf("\nCustomer Id No : %d",id);
		
		printf("\nCustomer Name : %s",name);
		
		printf("\nUnit Consumed : %d",unit);
		
		printf("\nAmount Charges @Rs. 1.80 per unit: %.2f",a);
		
		printf("\nSurcharge Amount: %.2f",sur);
		
		printf("\nNet Amount Paid by the Customer: %.2f",net);
	}
	
	else if(unit>=600)
	{
		a=(float)unit*2.00;
		
		sur=15*a/100;
		
		net=a+sur;
		
		printf("\nCustomer Id No : %d",id);
		
		printf("\nCustomer Name : %s",name);
		
		printf("\nUnit Consumed : %d",unit);
		
		printf("\nAmount Charges @Rs. 2.00 per unit: %.2f",a);
		
		printf("\nSurcharge Amount: %.2f",sur);
		
		printf("\nNet Amount Paid by the Customer: %.2f",net);
	}
}
