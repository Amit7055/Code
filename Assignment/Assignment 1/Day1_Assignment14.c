/* 9. Write a program create a menu
	1. odd/even
	2. major/ minor
	3. largest number from 2 numbers */
	
#include<stdio.h>

int main() {
    int ch, a, b, c;
    printf("1. odd/even\n2. major/minor\n3. largest number from 2 numbers\n");
    scanf("%d", &ch);

    switch(ch) 
	{
        case 1:
            printf("Enter the number that you want to check: ");
            scanf("%d", &a);
            if(a % 2 == 0)
                printf("%d is an Even Number.\n", a);
            else
                printf("%d is an Odd Number.\n", a);
            break;
        case 2:
            printf("Enter your age: ");
            scanf("%d", &a);
            if(a >= 18)
                printf("You are MINOR.\n");
            else
                printf("You are MAJOR.\n");
            break;
        case 3:
            printf("Enter the first number: ");
            scanf("%d", &b);
            printf("Enter the second number: ");
            scanf("%d", &c);
            if(b > c)
                printf("%d is larger than %d.\n", b, c);
            if (c > b)
                printf("%d is larger than %d.\n", c, b);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

