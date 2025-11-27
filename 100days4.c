//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
void main()
{
	int a;
	printf("Enter the radius\n");
	scanf("%d",&a);
	printf("Area = %f,Circumference = %f\n",3.14*(a*a),2*3.14*a);
}
