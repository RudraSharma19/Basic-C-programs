//Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i, maxFreq = 0, answer = 0;
    
    printf("Enter a number:");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        freq[0] = 1;
    } else {
        while (n > 0) {
            digit = n % 10;
            freq[digit]++;
            n = n / 10;
        }
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            answer = i;
        }
    }

    printf("%d\n", answer);

    return 0;
}
