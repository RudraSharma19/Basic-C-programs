//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
void main()
{
	int intsec,hrs,mins,secs;
	printf("Enter time time in seconds\n");
	scanf("%d",&intsec);
	hrs=intsec/3600;
	mins=(intsec %3600)/60;
	secs= intsec %60;
	printf("%d: %d: %d",hrs,mins,secs);
}
