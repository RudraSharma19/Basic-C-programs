//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int product = 1;
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {   
            product *= i;
        }
    }

    printf("%d\n", product);
    return 0;
}

