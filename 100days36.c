//Q36: Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int x = a, y = b, temp;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("%d\n", x);

    return 0;
}
