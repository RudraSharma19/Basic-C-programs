/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/

#include<stdio.h>
int main()
{
	int dayslate;
	int fine;
	printf("Enter number of days late: ");
	scanf("%d", &dayslate);
	if (dayslate <= 0)
	{
		printf("no fine. Book returned on time.\n");
	}
	else if (dayslate <= 5)
	{
		fine = dayslate * 2;
		printf("Fine: $%d\n", fine);
	}
	else if (dayslate <= 10) 
	{
		fine = (5 * 2) + ((dayslate - 5) * 4);
		printf("Fine: $%d\n", fine);
	}
	else if (dayslate <= 30)
	{
		fine = (5 * 2) + (5 * 4) + ((dayslate - 10) * 6);
		printf("Fine: $%d\n", fine);
	}
	else
	{
		printf("Menbership Cancelled due to excessive delay. \n");
	}
	return 0;
}
