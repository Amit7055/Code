/*6.Write a program scan rollno and name of student scan 3 subject
marks calculate total and percentage give class as distinction first 
class second class or fail */

#include<stdio.h>
int main() {
    char name[30];
    int rollno, sub1, sub2, sub3, total, a, b, c;
    float per;

    printf("Enter the Name: ");
    scanf("%s", name);

    printf("Enter the First Subject:\t");
    scanf("%d", &sub1);
    printf("Total Marks of First Subject:\t");
    scanf("%d", &a);

    printf("Enter the Second Subject:\t");
    scanf("%d", &sub2);
    printf("Total Marks of Second Subject:\t");
    scanf("%d", &b);

    printf("Enter the Third Subject:\t");
    scanf("%d", &sub3);
    printf("Total Marks of Third Subject:\t");
    scanf("%d", &c);

    total = sub1 + sub2 + sub3;

    int mark = a + b + c;

    per = ((float)total / mark) * 100;

    printf("\nName: %s", name);
    printf("\nThe First Subject :\t%d", sub1);
    printf("\nThe Second Subject :\t%d", sub2);
    printf("\nThe Third Subject :\t%d", sub3);
    printf("\nTotal :\t%d", total);
    printf("\tPercentage : \t%.2f", per); 

    if (per >= 70 && per <= 100) {
        printf("\tFirst Class with Distinction/First Division with Distinction");
    } else if (per >= 60 && per < 70) {
        printf("\tFirst Class/First Division");
    } else if (per >= 50 && per < 60) {
        printf("\tSecond Class/Second Division");
    } else if (per >= 35 && per < 50) {
        printf("\tThird Class/Third Division/Pass Class");
    } else {
        printf("\tFailed");
    }
}

