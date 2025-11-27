//Q43: Writing a program to check if a number is a strong number or not.

#include <stdio.h>
int main() 
{
    int num, temp, remainder, result = 0, fact;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) 
    {
        remainder = temp % 10;
        fact = 1;
        for (int i = 1; i <= remainder; i++) 
        {
            fact *= i;
        }
        result += fact;
        temp /= 10;
    }
    if (result == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);
    return 0;
}