//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


#include<stdio.h>
#include<math.h>
void main()
{
	int prin,rate,time;
	printf("Enter the principal ,rate ,time\n");
	scanf("%d",&prin);
	scanf("%d",&rate);
	scanf("%d",&time);
	printf("The Simple Interest = %f\n",(prin*rate*time)/100.0);
	printf("The Compount Interest = %f\n",prin*pow((1+rate/100.0),time)-prin);
}
