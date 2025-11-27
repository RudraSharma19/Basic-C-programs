//Q39: Writing a program to find the product of odd digits of a number.

#include <stdio.h>
int main() 
{
    int n, r, prod = 1, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) 
    {
        r = n % 10;
        if (r % 2 != 0) 
        {
            prod = prod * r;
            flag = 1;
        }
        n = n / 10;
    }
    if (flag)
        printf("Product of odd digits: %d", prod);
    else
        printf("No odd digit found in the number.");
    return 0;
}