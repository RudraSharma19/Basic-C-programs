//Q37: Write a program to find the LCM of two numbers.


#include <stdio.h>

int main() {
    int a, b;
    int x, y, temp, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("%d\n", lcm);

    return 0;
}
