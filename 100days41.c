//Q41: Write a program to swap the first and last digit of a number.


#include <stdio.h>

int main() {
    int n, original, first, last, pow10 = 1, middle;

    scanf("%d", &n);

    original = n;
    last = n % 10;

    while (n >= 10) {
        n = n / 10;
        pow10 = pow10 * 10;
    }
    first = n;

    middle = original % pow10;
    middle = middle / 10;

    int result = last * pow10 + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}
