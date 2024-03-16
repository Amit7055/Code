/*20.	Write a program in C which is a Menu-Driven Program 
to compute the area of the various geometrical shape.
*/

#include<stdio.h>
main()
{
	int ch,a,b,area;
	printf("1.Area of Rectangle:");
	printf("\n2.Area of Square:");
	printf("\n3.Area of a Triangle:");
	printf("\n4.Area of a Circle:\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("Enter length : ");
			scanf("%d",&a);
			
			printf("Enter width : ");
			scanf("%d",&b);
			
			area=a*b;
			
			printf("Area of Rectangle: ",area);
			
			break;
			
		case 2:	
		    printf("Enter sides of the square : ");
			scanf("%d",&a);
			
			area=a*a;
			
			printf("Area of Square: ",area);
			
			break;
			
		case 3:
		    printf("Enter base  : ");
			scanf("%d",&a);
			
			printf("Enter height : ");
			scanf("%d",&b);
			
			area=1/2*a*b;
			
			printf("Area of a Triangle: ",area);
			
			break;
			
		case 4:
		    printf("Enter radius of the circle  : ");
			scanf("%d",&a);
			
			area=3.14*a;
			
			printf("Area of a Circle: ",area);
			
			break;
			
		default:
			printf("Enter Valid Choice.");
	}
}
