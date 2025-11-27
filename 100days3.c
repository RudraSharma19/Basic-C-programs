//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter teo sides of a Rectangle\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("The Area = %d, Perimeter = %d\n",a*b,2*(a+b));
}
