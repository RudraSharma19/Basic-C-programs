/*Q52: Writing a program to print the following pattern:
*

*
*
*

*
*
*
*
*

*
*
*

*                */
#include <stdio.h>
int main() 
{
    int i, j, k;
    for(i = 1; i <= 4; i++) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("*\n");
        }
        printf("\n");
    }
    for(i = 3; i >= 1; i--) 
    {
        for(j = 1; j <= i; j++) 
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}