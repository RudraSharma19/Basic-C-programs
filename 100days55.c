//Q55: Writing a program to print all the prime numbers between 1 to n.

#include <stdio.h>
int main() 
{
    int n, i, j, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are: ", n);
    for (i = 2; i <= n; i++) 
    {
        count = 0;
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                count++;
                break;
            }
        }
        if (count == 0) 
        {
            printf("%d ", i);
        }
    }
    return 0;
}