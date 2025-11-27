//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
void main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if(year%400==0)
	printf("Leap year\n");
	else if(year%100==0)
	printf("Not a Leap year\n");
	else if(year%4==0)
	printf("Leap year\n");
	else
	printf("Not a Leap year\n");
}
