//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int binary[32];
    int i = 0;
    int j; 
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;         
        i++;
    }

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}

